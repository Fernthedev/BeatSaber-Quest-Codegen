#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConditionalAttribute)
// Forward declare root types
namespace System::Diagnostics {
class ConditionalAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::ConditionalAttribute);
// Type: System.Diagnostics::ConditionalAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3727))
// CS Name: ::System.Diagnostics::ConditionalAttribute*
class CORDL_TYPE ConditionalAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <ConditionString>k__BackingField offset 0x10
 __declspec(property(get=__get__ConditionString_k__BackingField, put=__set__ConditionString_k__BackingField)) ::StringW  _ConditionString_k__BackingField;

constexpr void __set__ConditionString_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__ConditionString_k__BackingField() ;

constexpr ::StringW const& __get__ConditionString_k__BackingField() const;

static inline ::System::Diagnostics::ConditionalAttribute* New_ctor(::StringW  conditionString) ;

/// @brief Method .ctor addr 0x2579bd8 size 0x28 virtual false final false
inline void _ctor(::StringW  conditionString) ;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConditionalAttribute(ConditionalAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConditionalAttribute(ConditionalAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConditionalAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ConditionalAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::ConditionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ConditionalAttribute*, "System.Diagnostics", "ConditionalAttribute");
