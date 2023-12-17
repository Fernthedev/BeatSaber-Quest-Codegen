#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnDeserializedAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class OnDeserializedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::OnDeserializedAttribute);
// Type: System.Runtime.Serialization::OnDeserializedAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3232))
// CS Name: ::System.Runtime.Serialization::OnDeserializedAttribute*
class CORDL_TYPE OnDeserializedAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Runtime::Serialization::OnDeserializedAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x24bdee8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializedAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDeserializedAttribute(OnDeserializedAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializedAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDeserializedAttribute(OnDeserializedAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OnDeserializedAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::OnDeserializedAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::OnDeserializedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OnDeserializedAttribute*, "System.Runtime.Serialization", "OnDeserializedAttribute");
