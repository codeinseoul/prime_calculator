CXX := emcc
CXX_SUFFIX := cc

INCLUDE_DIR := ./src
SRC_DIR := ./src
BUILD_DIR := ./build

SRC := $(wildcard $(SRC_DIR)/*.$(CXX_SUFFIX))

all: html js

html:
	mkdir -p $(BUILD_DIR)/html
	$(CXX) ${SRC} -o $(BUILD_DIR)/html/template.html

js:
	mkdir -p $(BUILD_DIR)/js
	$(CXX) ${SRC} -o $(BUILD_DIR)/js/template.js

clean:
	rm -rf $(BUILD_DIR)
