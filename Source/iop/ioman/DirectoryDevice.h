#pragma once

#include <string>
#include "../Ioman_Device.h"

namespace Iop
{
	namespace Ioman
	{
		class CDirectoryDevice : public CDevice
		{
		public:
			virtual ~CDirectoryDevice() = default;

			Framework::CStream* GetFile(uint32, const char*) override;
			Directory GetDirectory(const char*) override;
			void CreateDirectory(const char*) override;

		protected:
			virtual fs::path GetBasePath() = 0;
		};
	}
}