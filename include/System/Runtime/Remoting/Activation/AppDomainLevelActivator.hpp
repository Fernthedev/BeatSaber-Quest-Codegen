// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Activation.IActivator
#include "System/Runtime/Remoting/Activation/IActivator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionReturnMessage
  class IConstructionReturnMessage;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.AppDomainLevelActivator
  class AppDomainLevelActivator : public ::Il2CppObject/*, public System::Runtime::Remoting::Activation::IActivator*/ {
    public:
    // private System.String _activationUrl
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* activationUrl;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.Remoting.Activation.IActivator _next
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Remoting::Activation::IActivator* next;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Activation::IActivator*) == 0x8);
    // Creating value type constructor for type: AppDomainLevelActivator
    AppDomainLevelActivator(::Il2CppString* activationUrl_ = {}, System::Runtime::Remoting::Activation::IActivator* next_ = {}) noexcept : activationUrl{activationUrl_}, next{next_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Activation::IActivator
    operator System::Runtime::Remoting::Activation::IActivator() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Activation::IActivator*>(this);
    }
    // public System.Void .ctor(System.String activationUrl, System.Runtime.Remoting.Activation.IActivator next)
    // Offset: 0x1420C8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppDomainLevelActivator* New_ctor(::Il2CppString* activationUrl, System::Runtime::Remoting::Activation::IActivator* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Activation::AppDomainLevelActivator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppDomainLevelActivator*, creationType>(activationUrl, next)));
    }
    // public System.Runtime.Remoting.Activation.IActivator get_NextActivator()
    // Offset: 0x142126C
    System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
    // public System.Runtime.Remoting.Activation.IConstructionReturnMessage Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage ctorCall)
    // Offset: 0x1421274
    System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
  }; // System.Runtime.Remoting.Activation.AppDomainLevelActivator
  #pragma pack(pop)
  static check_size<sizeof(AppDomainLevelActivator), 24 + sizeof(System::Runtime::Remoting::Activation::IActivator*)> __System_Runtime_Remoting_Activation_AppDomainLevelActivatorSizeCheck;
  static_assert(sizeof(AppDomainLevelActivator) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::AppDomainLevelActivator*, "System.Runtime.Remoting.Activation", "AppDomainLevelActivator");
// Writing includes for template specializations
#include "System/Runtime/Remoting/Activation/IConstructionCallMessage.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::AppDomainLevelActivator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator
// Il2CppName: get_NextActivator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Activation::IActivator* (System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)()>(&System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::AppDomainLevelActivator*), "get_NextActivator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Activation::IConstructionReturnMessage* (System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)(System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::AppDomainLevelActivator*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Activation::IConstructionCallMessage*>()});
  }
};
