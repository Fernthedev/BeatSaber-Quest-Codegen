// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: Zenject.FromBinderNonGeneric
#include "Zenject/FromBinderNonGeneric.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionSelectTypesBinder
  class ConventionSelectTypesBinder;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConcreteBinderNonGeneric
  // [NoReflectionBakingAttribute] Offset: DDC564
  class ConcreteBinderNonGeneric : public Zenject::FromBinderNonGeneric {
    public:
    // Creating value type constructor for type: ConcreteBinderNonGeneric
    ConcreteBinderNonGeneric() noexcept {}
    // public Zenject.FromBinderNonGeneric ToSelf()
    // Offset: 0x138C3E4
    Zenject::FromBinderNonGeneric* ToSelf();
    // public Zenject.FromBinderNonGeneric To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FromBinderNonGeneric* To() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConcreteBinderNonGeneric::To");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FromBinderNonGeneric*, false>(this, ___generic__method);
    }
    // public Zenject.FromBinderNonGeneric To(params System.Type[] concreteTypes)
    // Offset: 0x138C4FC
    Zenject::FromBinderNonGeneric* To(::Array<System::Type*>* concreteTypes);
    // Creating initializer_list -> params proxy for: Zenject.FromBinderNonGeneric To(params System.Type[] concreteTypes)
    Zenject::FromBinderNonGeneric* To(std::initializer_list<System::Type*> concreteTypes);
    // Creating TArgs -> initializer_list proxy for: Zenject.FromBinderNonGeneric To(params System.Type[] concreteTypes)
    template<class ...TParams>
    Zenject::FromBinderNonGeneric* To(TParams&&... concreteTypes) {
      return To({concreteTypes...});
    }
    // public Zenject.FromBinderNonGeneric To(System.Collections.Generic.IEnumerable`1<System.Type> concreteTypes)
    // Offset: 0x138C500
    Zenject::FromBinderNonGeneric* To(System::Collections::Generic::IEnumerable_1<System::Type*>* concreteTypes);
    // public Zenject.FromBinderNonGeneric To(System.Action`1<Zenject.ConventionSelectTypesBinder> generator)
    // Offset: 0x138C5F0
    Zenject::FromBinderNonGeneric* To(System::Action_1<Zenject::ConventionSelectTypesBinder*>* generator);
    // private Zenject.IProvider <ToSelf>b__1_0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x138C924
    Zenject::IProvider* $ToSelf$b__1_0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Offset: 0x138C3BC
    // Implemented from: Zenject.FromBinderNonGeneric
    // Base method: System.Void FromBinderNonGeneric::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Base method: System.Void FromBinder::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConcreteBinderNonGeneric* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::BindStatement* bindStatement) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConcreteBinderNonGeneric::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConcreteBinderNonGeneric*, creationType>(bindContainer, bindInfo, bindStatement)));
    }
  }; // Zenject.ConcreteBinderNonGeneric
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConcreteBinderNonGeneric*, "Zenject", "ConcreteBinderNonGeneric");
// Writing includes for template specializations
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "System/Action_1.hpp"
#include "Zenject/DiContainer.hpp"
#include "System/Type.hpp"
#include "Zenject/BindInfo.hpp"
#include "Zenject/BindStatement.hpp"
// Writing MetadataGetter for method: Zenject::ConcreteBinderNonGeneric::ToSelf
// Il2CppName: ToSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FromBinderNonGeneric* (Zenject::ConcreteBinderNonGeneric::*)()>(&Zenject::ConcreteBinderNonGeneric::ToSelf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConcreteBinderNonGeneric*), "ToSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConcreteBinderNonGeneric::To
// Il2CppName: To
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ConcreteBinderNonGeneric::To
// Il2CppName: To
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FromBinderNonGeneric* (Zenject::ConcreteBinderNonGeneric::*)(::Array<System::Type*>*)>(&Zenject::ConcreteBinderNonGeneric::To)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConcreteBinderNonGeneric*), "To", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<System::Type*>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::ConcreteBinderNonGeneric::To
// Il2CppName: To
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FromBinderNonGeneric* (Zenject::ConcreteBinderNonGeneric::*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::ConcreteBinderNonGeneric::To)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConcreteBinderNonGeneric*), "To", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<System::Type*>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::ConcreteBinderNonGeneric::To
// Il2CppName: To
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FromBinderNonGeneric* (Zenject::ConcreteBinderNonGeneric::*)(System::Action_1<Zenject::ConventionSelectTypesBinder*>*)>(&Zenject::ConcreteBinderNonGeneric::To)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConcreteBinderNonGeneric*), "To", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<Zenject::ConventionSelectTypesBinder*>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::ConcreteBinderNonGeneric::$ToSelf$b__1_0
// Il2CppName: <ToSelf>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::ConcreteBinderNonGeneric::*)(Zenject::DiContainer*, System::Type*)>(&Zenject::ConcreteBinderNonGeneric::$ToSelf$b__1_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConcreteBinderNonGeneric*), "<ToSelf>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: Zenject::ConcreteBinderNonGeneric::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
