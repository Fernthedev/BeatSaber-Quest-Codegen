#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteMatcher)
namespace System::Collections {
class Hashtable;
}
namespace System {
struct TermInfoStrings;
}
// Forward declare root types
namespace System {
class ByteMatcher;
}
// Write type traits
MARK_REF_PTR_T(::System::ByteMatcher);
// Type: System::ByteMatcher
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2623))
// CS Name: ::System::ByteMatcher*
class CORDL_TYPE ByteMatcher : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field map offset 0x10
 __declspec(property(get=__get_map, put=__set_map)) ::System::Collections::Hashtable*  map;

/// @brief Field starts offset 0x18
 __declspec(property(get=__get_starts, put=__set_starts)) ::System::Collections::Hashtable*  starts;

constexpr void __set_map(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_map() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_map() const;

constexpr void __set_starts(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get_starts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get_starts() const;

/// @brief Method AddMapping addr 0x2604f80 size 0x120 virtual false final false
inline void AddMapping(::System::TermInfoStrings  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  val) ;

/// @brief Method Sort addr 0x26050a0 size 0x4 virtual false final false
inline void Sort() ;

/// @brief Method StartsWith addr 0x2601fa4 size 0x88 virtual false final false
inline bool StartsWith(int32_t  c) ;

/// @brief Method Match addr 0x260202c size 0x48c virtual false final false
inline ::System::TermInfoStrings Match(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  offset, int32_t  length, ByRef<int32_t>  used) ;

static inline ::System::ByteMatcher* New_ctor() ;

/// @brief Method .ctor addr 0x2604eb8 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ByteMatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ByteMatcher(ByteMatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ByteMatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ByteMatcher(ByteMatcher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ByteMatcher()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ByteMatcher, 0x20>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ByteMatcher);
DEFINE_IL2CPP_ARG_TYPE(::System::ByteMatcher*, "System", "ByteMatcher");
