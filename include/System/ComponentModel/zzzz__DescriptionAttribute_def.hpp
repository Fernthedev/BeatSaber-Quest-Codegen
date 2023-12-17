#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DescriptionAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DescriptionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DescriptionAttribute);
// Type: System.ComponentModel::DescriptionAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9388))
// CS Name: ::System.ComponentModel::DescriptionAttribute*
class CORDL_TYPE DescriptionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <DescriptionValue>k__BackingField offset 0x10
 __declspec(property(get=__get__DescriptionValue_k__BackingField, put=__set__DescriptionValue_k__BackingField)) ::StringW  _DescriptionValue_k__BackingField;

 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_DescriptionValue, put=set_DescriptionValue)) ::StringW  DescriptionValue;

static inline void setStaticF_Default(::System::ComponentModel::DescriptionAttribute*  value) ;

static inline ::System::ComponentModel::DescriptionAttribute* getStaticF_Default() ;

constexpr void __set__DescriptionValue_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__DescriptionValue_k__BackingField() ;

constexpr ::StringW const& __get__DescriptionValue_k__BackingField() const;

static inline ::System::ComponentModel::DescriptionAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x290418c size 0x5c virtual false final false
inline void _ctor() ;

static inline ::System::ComponentModel::DescriptionAttribute* New_ctor(::StringW  description) ;

/// @brief Method .ctor addr 0x29041e8 size 0x28 virtual false final false
inline void _ctor(::StringW  description) ;

/// @brief Method get_Description addr 0x2904210 size 0x8 virtual true final false
inline ::StringW get_Description() ;

/// @brief Method get_DescriptionValue addr 0x2904218 size 0x8 virtual false final false
inline ::StringW get_DescriptionValue() ;

/// @brief Method set_DescriptionValue addr 0x2904220 size 0x8 virtual false final false
inline void set_DescriptionValue(::StringW  value) ;

/// @brief Method Equals addr 0x2904228 size 0xcc virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x29042f4 size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x290431c size 0x68 virtual true final false
inline bool IsDefaultAttribute() ;

// Ctor Parameters [CppParam { name: "", ty: "DescriptionAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DescriptionAttribute(DescriptionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DescriptionAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DescriptionAttribute(DescriptionAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DescriptionAttribute()  = default;
public:


// Fields

// Static field Default


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DescriptionAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DescriptionAttribute*, "System.ComponentModel", "DescriptionAttribute");
