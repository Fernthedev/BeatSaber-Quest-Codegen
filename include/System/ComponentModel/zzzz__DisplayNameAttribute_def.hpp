#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DisplayNameAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DisplayNameAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DisplayNameAttribute);
// Type: System.ComponentModel::DisplayNameAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9393))
// CS Name: ::System.ComponentModel::DisplayNameAttribute*
class CORDL_TYPE DisplayNameAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <DisplayNameValue>k__BackingField offset 0x10
 __declspec(property(get=__get__DisplayNameValue_k__BackingField, put=__set__DisplayNameValue_k__BackingField)) ::StringW  _DisplayNameValue_k__BackingField;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_DisplayNameValue, put=set_DisplayNameValue)) ::StringW  DisplayNameValue;

static inline void setStaticF_Default(::System::ComponentModel::DisplayNameAttribute*  value) ;

static inline ::System::ComponentModel::DisplayNameAttribute* getStaticF_Default() ;

constexpr void __set__DisplayNameValue_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__DisplayNameValue_k__BackingField() ;

constexpr ::StringW const& __get__DisplayNameValue_k__BackingField() const;

static inline ::System::ComponentModel::DisplayNameAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2904b64 size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::ComponentModel::DisplayNameAttribute* New_ctor(::StringW  displayName) ;

/// @brief Method .ctor addr 0x2904bc0 size 0x28 virtual false final false
inline void _ctor(::StringW  displayName) ;

/// @brief Method get_DisplayName addr 0x2904be8 size 0x8 virtual true final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_DisplayNameValue addr 0x2904bf0 size 0x8 virtual false final false
inline ::StringW get_DisplayNameValue() ;

/// @brief Method set_DisplayNameValue addr 0x2904bf8 size 0x8 virtual false final false
inline void set_DisplayNameValue(::StringW  value) ;

/// @brief Method Equals addr 0x2904c00 size 0xcc virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2904ccc size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x2904cf4 size 0x68 virtual true final false
inline bool IsDefaultAttribute() ;

// Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisplayNameAttribute(DisplayNameAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisplayNameAttribute(DisplayNameAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DisplayNameAttribute()  = default;
public:


// Fields

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DisplayNameAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DisplayNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DisplayNameAttribute*, "System.ComponentModel", "DisplayNameAttribute");
