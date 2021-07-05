// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.ParseException
  class ParseException : public System::Exception {
    public:
    // Creating value type constructor for type: ParseException
    ParseException() noexcept {}
    // public System.Void .ctor(System.String message)
    // Offset: 0x23E10E8
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParseException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::ParseException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParseException*, creationType>(message)));
    }
  }; // LiteNetLib.Utils.ParseException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::ParseException*, "LiteNetLib.Utils", "ParseException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::ParseException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
