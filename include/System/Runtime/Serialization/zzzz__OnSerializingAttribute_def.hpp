#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnSerializingAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class OnSerializingAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::OnSerializingAttribute);
// Type: System.Runtime.Serialization::OnSerializingAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3229))
// CS Name: ::System.Runtime.Serialization::OnSerializingAttribute*
class CORDL_TYPE OnSerializingAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Runtime::Serialization::OnSerializingAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x24bded0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OnSerializingAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSerializingAttribute(OnSerializingAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSerializingAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSerializingAttribute(OnSerializingAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OnSerializingAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::OnSerializingAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::OnSerializingAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OnSerializingAttribute*, "System.Runtime.Serialization", "OnSerializingAttribute");
