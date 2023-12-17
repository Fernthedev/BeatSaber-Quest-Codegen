#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OptionalFieldAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class OptionalFieldAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::OptionalFieldAttribute);
// Type: System.Runtime.Serialization::OptionalFieldAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3228))
// CS Name: ::System.Runtime.Serialization::OptionalFieldAttribute*
class CORDL_TYPE OptionalFieldAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field versionAdded offset 0x10
 __declspec(property(get=__get_versionAdded, put=__set_versionAdded)) int32_t  versionAdded;

 __declspec(property(put=set_VersionAdded)) int32_t  VersionAdded;

constexpr void __set_versionAdded(int32_t  value) ;

constexpr int32_t& __get_versionAdded() ;

constexpr int32_t const& __get_versionAdded() const;

static inline ::System::Runtime::Serialization::OptionalFieldAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x24bde48 size 0x10 virtual false final false
inline void _ctor() ;

/// @brief Method set_VersionAdded addr 0x24bde58 size 0x78 virtual false final false
inline void set_VersionAdded(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "OptionalFieldAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OptionalFieldAttribute(OptionalFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OptionalFieldAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OptionalFieldAttribute(OptionalFieldAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OptionalFieldAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::OptionalFieldAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::OptionalFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OptionalFieldAttribute*, "System.Runtime.Serialization", "OptionalFieldAttribute");
