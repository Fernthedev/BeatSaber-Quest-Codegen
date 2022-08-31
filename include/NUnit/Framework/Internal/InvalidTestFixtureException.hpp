// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: InvalidTestFixtureException
  class InvalidTestFixtureException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::InvalidTestFixtureException);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::InvalidTestFixtureException*, "NUnit.Framework.Internal", "InvalidTestFixtureException");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.InvalidTestFixtureException
  // [TokenAttribute] Offset: FFFFFFFF
  class InvalidTestFixtureException : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A440E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidTestFixtureException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::InvalidTestFixtureException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidTestFixtureException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x2A4414C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidTestFixtureException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::InvalidTestFixtureException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidTestFixtureException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2A441C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidTestFixtureException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::InvalidTestFixtureException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidTestFixtureException*, creationType>(info, context)));
    }
  }; // NUnit.Framework.Internal.InvalidTestFixtureException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::InvalidTestFixtureException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::InvalidTestFixtureException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::InvalidTestFixtureException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
