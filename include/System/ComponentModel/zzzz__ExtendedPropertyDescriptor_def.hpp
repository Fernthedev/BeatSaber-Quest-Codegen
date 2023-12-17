#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExtendedPropertyDescriptor)
namespace System::ComponentModel {
class ReflectPropertyDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System {
class Type;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ExtendedPropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ExtendedPropertyDescriptor);
// Type: System.ComponentModel::ExtendedPropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9444))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9427))
// CS Name: ::System.ComponentModel::ExtendedPropertyDescriptor*
class CORDL_TYPE ExtendedPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::ComponentModel::PropertyDescriptor)]{};

/// @brief Field _extenderInfo offset 0x88
 __declspec(property(get=__get__extenderInfo, put=__set__extenderInfo)) ::System::ComponentModel::ReflectPropertyDescriptor*  _extenderInfo;

/// @brief Field _provider offset 0x90
 __declspec(property(get=__get__provider, put=__set__provider)) ::System::ComponentModel::IExtenderProvider*  _provider;

 __declspec(property(get=get_ComponentType)) ::System::Type*  ComponentType;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_PropertyType)) ::System::Type*  PropertyType;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

constexpr void __set__extenderInfo(::System::ComponentModel::ReflectPropertyDescriptor*  value) ;

constexpr ::System::ComponentModel::ReflectPropertyDescriptor* __get__extenderInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ReflectPropertyDescriptor*> __get__extenderInfo() const;

constexpr void __set__provider(::System::ComponentModel::IExtenderProvider*  value) ;

constexpr ::System::ComponentModel::IExtenderProvider* __get__provider() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IExtenderProvider*> __get__provider() const;

static inline ::System::ComponentModel::ExtendedPropertyDescriptor* New_ctor(::System::ComponentModel::ReflectPropertyDescriptor*  extenderInfo, ::System::Type*  receiverType, ::System::ComponentModel::IExtenderProvider*  provider, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

/// @brief Method .ctor addr 0x291007c size 0x250 virtual false final false
inline void _ctor(::System::ComponentModel::ReflectPropertyDescriptor*  extenderInfo, ::System::Type*  receiverType, ::System::ComponentModel::IExtenderProvider*  provider, ::ArrayW<::System::Attribute*,::Array<::System::Attribute*>*>  attributes) ;

/// @brief Method CanResetValue addr 0x291034c size 0x28 virtual true final false
inline bool CanResetValue(::System::Object*  comp) ;

/// @brief Method get_ComponentType addr 0x2910374 size 0x24 virtual true final false
inline ::System::Type* get_ComponentType() ;

/// @brief Method get_IsReadOnly addr 0x2910398 size 0xf8 virtual true final false
inline bool get_IsReadOnly() ;

/// @brief Method get_PropertyType addr 0x2910490 size 0x24 virtual true final false
inline ::System::Type* get_PropertyType() ;

/// @brief Method get_DisplayName addr 0x29104b4 size 0x1dc virtual true final false
inline ::StringW get_DisplayName() ;

/// @brief Method GetValue addr 0x2910690 size 0x28 virtual true final false
inline ::System::Object* GetValue(::System::Object*  comp) ;

/// @brief Method ResetValue addr 0x29106b8 size 0x28 virtual true final false
inline void ResetValue(::System::Object*  comp) ;

/// @brief Method SetValue addr 0x29106e0 size 0x2c virtual true final false
inline void SetValue(::System::Object*  component, ::System::Object*  value) ;

/// @brief Method ShouldSerializeValue addr 0x291070c size 0x28 virtual true final false
inline bool ShouldSerializeValue(::System::Object*  comp) ;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedPropertyDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtendedPropertyDescriptor(ExtendedPropertyDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedPropertyDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtendedPropertyDescriptor(ExtendedPropertyDescriptor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExtendedPropertyDescriptor()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ExtendedPropertyDescriptor, 0x98>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ExtendedPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExtendedPropertyDescriptor*, "System.ComponentModel", "ExtendedPropertyDescriptor");
