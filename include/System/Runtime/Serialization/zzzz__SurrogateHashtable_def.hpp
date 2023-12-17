#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SurrogateHashtable)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SurrogateHashtable;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SurrogateHashtable);
// Type: System.Runtime.Serialization::SurrogateHashtable
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3798))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3239))
// CS Name: ::System.Runtime.Serialization::SurrogateHashtable*
class CORDL_TYPE SurrogateHashtable : public ::System::Collections::Hashtable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Collections::Hashtable)]{};

static inline ::System::Runtime::Serialization::SurrogateHashtable* New_ctor(int32_t  size) ;

/// @brief Method .ctor addr 0x24bfa40 size 0x8 virtual false final false
inline void _ctor(int32_t  size) ;

/// @brief Method KeyEquals addr 0x24bfdec size 0x128 virtual true final false
inline bool KeyEquals(::System::Object*  key, ::System::Object*  item) ;

// Ctor Parameters [CppParam { name: "", ty: "SurrogateHashtable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SurrogateHashtable(SurrogateHashtable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurrogateHashtable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurrogateHashtable(SurrogateHashtable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SurrogateHashtable()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SurrogateHashtable, 0x50>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateHashtable*, "System.Runtime.Serialization", "SurrogateHashtable");
