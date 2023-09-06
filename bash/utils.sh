## Function to log errors
## ------------------------------------------------------------------------------
_errcnt=0
_errout() {
local err=${1:-"0"}
local msg=${2:-""}
local ftl=${3:-"0"}

        [ -z ${LFILE} ] && LFILE=/tmp/${RANDOM}_$(basename $0).log
        echo "\"$(date +%s)-${_errcnt}\": [ ${err}, \"${msg}\"]}" | tee -a ${LFILE}
        (( _errcnt++ ))
        [ ${ftl} -gt 0 ] && exit ${err}
}

## Iterate an array of maps
## ------------------------------------------------------------------------------
MAPS_ARRAY=(
  "url:https://example.com,environment:production,bucket_name:my-bucket"
  "url:https://example2.com,environment:staging,bucket_name:my-other-bucket"
  "url:https://example3.com,environment:development,bucket_name:my-third-bucket"
)

for map in "${MAPS_ARRAY[@]}"
do
  IFS=',' read -r -a map_components <<< "$map"
  url="${map_components[0]#*:}"
  environment="${map_components[1]#*:}"
  bucket_name="${map_components[2]#*:}"

  # Do something with the components
  echo "URL: $url, Environment: $environment, Bucket Name: $bucket_name"
done

## Mimic map/object variable and access like python
## ------------------------------------------------------------------------------
declare -A MAPS_ARRAY
MAPS_ARRAY=(
  ["production"]="https://example.com"
  ["staging"]="https://example2.com"
  ["development"]="https://example3.com"
)

echo ${MAPS_ARRAY["production"]}
