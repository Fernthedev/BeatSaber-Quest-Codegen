// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.InvalidTypeException
  class InvalidTypeException : public System::ArgumentException {
    public:
    // Creating value type constructor for type: InvalidTypeException
    InvalidTypeException() noexcept {}
    // public System.Void .ctor(System.String message)
    // Offset: 0x1B4B66C
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidTypeException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::InvalidTypeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidTypeException*, creationType>(message)));
    }
  }; // LiteNetLib.Utils.InvalidTypeException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::InvalidTypeException*, "LiteNetLib.Utils", "InvalidTypeException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::InvalidTypeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
