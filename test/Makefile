# Copyright 2012, Qualcomm Innovation Center, Inc.
# 
#    Licensed under the Apache License, Version 2.0 (the "License");
#    you may not use this file except in compliance with the License.
#    You may obtain a copy of the License at
# 
#        http://www.apache.org/licenses/LICENSE-2.0
# 
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the License is distributed on an "AS IS" BASIS,
#    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#    See the License for the specific language governing permissions and
#    limitations under the License.
# 

.PHONY: all clean

all: progs

LIBS += -lalljoyn
PROG_BINS =  \
        bignum \
        socktest \
        autochat \
        remarshal \
        unpack \
        rsa \
        srp \
        aes_ccm \
        keystore \
        bbservice \
        bbsig \
        bbclient \
        bbjoin \
        bbjitter \
        bttimingclient \
        marshal \
        names \
        compression \
        rawclient \
        rawservice \
        sessions

# Test Programs
progs : $(PROG_BINS)

%:%.cc
	$(CC) $(CXXFLAGS) $(CPPDEFINES) $(INCLUDE) $(LINKFLAGS) -o $@ $< $(LIBS)
	cp $@ $(INSTALLDIR)/dist/bin

clean:
	@rm -f $(PROG_BINS) *~


