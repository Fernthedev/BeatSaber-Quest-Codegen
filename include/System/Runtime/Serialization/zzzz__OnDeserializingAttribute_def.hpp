#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnDeserializingAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class OnDeserializingAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::OnDeserializingAttribute);
// Type: System.Runtime.Serialization::OnDeserializingAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3231))
// CS Name: ::System.Runtime.Serialization::OnDeserializingAttribute*
class CORDL_TYPE OnDeserializingAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Runtime::Serialization::OnDeserializingAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x24bdee0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializingAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDeserializingAttribute(OnDeserializingAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializingAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDeserializingAttribute(OnDeserializingAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OnDeserializingAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::OnDeserializingAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::OnDeserializingAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OnDeserializingAttribute*, "System.Runtime.Serialization", "OnDeserializingAttribute");
