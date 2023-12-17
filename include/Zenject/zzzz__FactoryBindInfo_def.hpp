#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FactoryBindInfo)
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class FactoryBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FactoryBindInfo);
// Type: Zenject::FactoryBindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10948))
// CS Name: ::Zenject::FactoryBindInfo*
class CORDL_TYPE FactoryBindInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <FactoryType>k__BackingField offset 0x10
 __declspec(property(get=__get__FactoryType_k__BackingField, put=__set__FactoryType_k__BackingField)) ::System::Type*  _FactoryType_k__BackingField;

/// @brief Field <ProviderFunc>k__BackingField offset 0x18
 __declspec(property(get=__get__ProviderFunc_k__BackingField, put=__set__ProviderFunc_k__BackingField)) ::System::Func_2<::Zenject::DiContainer*,::Zenject::IProvider*>*  _ProviderFunc_k__BackingField;

/// @brief Field <Arguments>k__BackingField offset 0x20
 __declspec(property(get=__get__Arguments_k__BackingField, put=__set__Arguments_k__BackingField)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  _Arguments_k__BackingField;

 __declspec(property(get=get_FactoryType, put=set_FactoryType)) ::System::Type*  FactoryType;

 __declspec(property(get=get_ProviderFunc, put=set_ProviderFunc)) ::System::Func_2<::Zenject::DiContainer*,::Zenject::IProvider*>*  ProviderFunc;

 __declspec(property(get=get_Arguments, put=set_Arguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  Arguments;

constexpr void __set__FactoryType_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__FactoryType_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__FactoryType_k__BackingField() const;

constexpr void __set__ProviderFunc_k__BackingField(::System::Func_2<::Zenject::DiContainer*,::Zenject::IProvider*>*  value) ;

constexpr ::System::Func_2<::Zenject::DiContainer*,::Zenject::IProvider*>* __get__ProviderFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::DiContainer*,::Zenject::IProvider*>*> __get__ProviderFunc_k__BackingField() const;

constexpr void __set__Arguments_k__BackingField(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* __get__Arguments_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> __get__Arguments_k__BackingField() const;

static inline ::Zenject::FactoryBindInfo* New_ctor(::System::Type*  factoryType) ;

/// @brief Method .ctor addr 0x2edf0a0 size 0x90 virtual false final false
inline void _ctor(::System::Type*  factoryType) ;

/// @brief Method get_FactoryType addr 0x2edf130 size 0x8 virtual false final false
inline ::System::Type* get_FactoryType() ;

/// @brief Method set_FactoryType addr 0x2edf138 size 0x8 virtual false final false
inline void set_FactoryType(::System::Type*  value) ;

/// @brief Method get_ProviderFunc addr 0x2edf140 size 0x8 virtual false final false
inline ::System::Func_2<::Zenject::DiContainer*,::Zenject::IProvider*>* get_ProviderFunc() ;

/// @brief Method set_ProviderFunc addr 0x2edf148 size 0x8 virtual false final false
inline void set_ProviderFunc(::System::Func_2<::Zenject::DiContainer*,::Zenject::IProvider*>*  value) ;

/// @brief Method get_Arguments addr 0x2edf150 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* get_Arguments() ;

/// @brief Method set_Arguments addr 0x2edf158 size 0x8 virtual false final false
inline void set_Arguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryBindInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryBindInfo(FactoryBindInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryBindInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryBindInfo(FactoryBindInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryBindInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FactoryBindInfo, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::FactoryBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryBindInfo*, "Zenject", "FactoryBindInfo");
