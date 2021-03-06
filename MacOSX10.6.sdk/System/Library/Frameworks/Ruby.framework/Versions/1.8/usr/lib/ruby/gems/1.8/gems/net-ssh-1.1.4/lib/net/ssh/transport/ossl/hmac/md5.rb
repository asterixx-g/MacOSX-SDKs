#--
# =============================================================================
# Copyright (c) 2004,2005 Jamis Buck (jamis@37signals.com)
# All rights reserved.
#
# This source file is distributed as part of the Net::SSH Secure Shell Client
# library for Ruby. This file (and the library as a whole) may be used only as
# allowed by either the BSD license, or the Ruby license (or, by association
# with the Ruby license, the GPL). See the "doc" subdirectory of the Net::SSH
# distribution for the texts of these licenses.
# -----------------------------------------------------------------------------
# net-ssh website : http://net-ssh.rubyforge.org
# project website: http://rubyforge.org/projects/net-ssh
# =============================================================================
#++

require 'net/ssh/transport/ossl/hmac/hmac'
require 'openssl'

module Net
  module SSH
    module Transport
      module OSSL

        module HMAC

          # The MD5 HMAC algorithm.
          class MD5 < Abstract

            # Create a new instance of the MD5 algorithm. This has a mac
            # length of 16 and a key length of 16, and uses the MD5 digest to
            # create the HMAC digest.
            def initialize
              @mac_length = 16
              @digest_class = OpenSSL::Digest::MD5
              @key_length = 16
            end

          end

        end

      end
    end
  end
end
