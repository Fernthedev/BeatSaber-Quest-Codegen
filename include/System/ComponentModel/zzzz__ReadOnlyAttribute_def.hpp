#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ReadOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReadOnlyAttribute);
// Type: System.ComponentModel::ReadOnlyAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9400))
// CS Name: ::System.ComponentModel::ReadOnlyAttribute*
class CORDL_TYPE ReadOnlyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <IsReadOnly>k__BackingField offset 0x10
 __declspec(property(get=__get__IsReadOnly_k__BackingField, put=__set__IsReadOnly_k__BackingField)) bool  _IsReadOnly_k__BackingField;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

static inline void setStaticF_Yes(::System::ComponentModel::ReadOnlyAttribute*  value) ;

static inline ::System::ComponentModel::ReadOnlyAttribute* getStaticF_Yes() ;

static inline void setStaticF_No(::System::ComponentModel::ReadOnlyAttribute*  value) ;

static inline ::System::ComponentModel::ReadOnlyAttribute* getStaticF_No() ;

static inline void setStaticF_Default(::System::ComponentModel::ReadOnlyAttribute*  value) ;

static inline ::System::ComponentModel::ReadOnlyAttribute* getStaticF_Default() ;

constexpr void __set__IsReadOnly_k__BackingField(bool  value) ;

constexpr bool& __get__IsReadOnly_k__BackingField() ;

constexpr bool const& __get__IsReadOnly_k__BackingField() const;

static inline ::System::ComponentModel::ReadOnlyAttribute* New_ctor(bool  isReadOnly) ;

/// @brief Method .ctor addr 0x2904f34 size 0x28 virtual false final false
inline void _ctor(bool  isReadOnly) ;

/// @brief Method get_IsReadOnly addr 0x2904f5c size 0x8 virtual false final false
inline bool get_IsReadOnly() ;

/// @brief Method Equals addr 0x2904f64 size 0xe4 virtual true final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode addr 0x2905048 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x2905050 size 0x80 virtual true final false
inline bool IsDefaultAttribute() ;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlyAttribute(ReadOnlyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlyAttribute(ReadOnlyAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReadOnlyAttribute()  = default;
public:


// Fields

// Static field Yes

// Static field No

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReadOnlyAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReadOnlyAttribute*, "System.ComponentModel", "ReadOnlyAttribute");
