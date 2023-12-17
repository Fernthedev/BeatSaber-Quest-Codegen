#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignalBindingBindInfo)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class SignalBindingBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalBindingBindInfo);
// Type: Zenject::SignalBindingBindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10653))
// CS Name: ::Zenject::SignalBindingBindInfo*
class CORDL_TYPE SignalBindingBindInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <Identifier>k__BackingField offset 0x10
 __declspec(property(get=__get__Identifier_k__BackingField, put=__set__Identifier_k__BackingField)) ::System::Object*  _Identifier_k__BackingField;

/// @brief Field <SignalType>k__BackingField offset 0x18
 __declspec(property(get=__get__SignalType_k__BackingField, put=__set__SignalType_k__BackingField)) ::System::Type*  _SignalType_k__BackingField;

 __declspec(property(get=get_Identifier, put=set_Identifier)) ::System::Object*  Identifier;

 __declspec(property(get=get_SignalType, put=set_SignalType)) ::System::Type*  SignalType;

constexpr void __set__Identifier_k__BackingField(::System::Object*  value) ;

constexpr ::System::Object* __get__Identifier_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__Identifier_k__BackingField() const;

constexpr void __set__SignalType_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__SignalType_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__SignalType_k__BackingField() const;

static inline ::Zenject::SignalBindingBindInfo* New_ctor(::System::Type*  signalType) ;

/// @brief Method .ctor addr 0x2ec2404 size 0x28 virtual false final false
inline void _ctor(::System::Type*  signalType) ;

/// @brief Method get_Identifier addr 0x2ec242c size 0x8 virtual false final false
inline ::System::Object* get_Identifier() ;

/// @brief Method set_Identifier addr 0x2ec2434 size 0x8 virtual false final false
inline void set_Identifier(::System::Object*  value) ;

/// @brief Method get_SignalType addr 0x2ec243c size 0x8 virtual false final false
inline ::System::Type* get_SignalType() ;

/// @brief Method set_SignalType addr 0x2ec2444 size 0x8 virtual false final false
inline void set_SignalType(::System::Type*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "SignalBindingBindInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalBindingBindInfo(SignalBindingBindInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalBindingBindInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalBindingBindInfo(SignalBindingBindInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalBindingBindInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalBindingBindInfo, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SignalBindingBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalBindingBindInfo*, "Zenject", "SignalBindingBindInfo");
