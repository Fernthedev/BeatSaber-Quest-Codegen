#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitSet)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class BitSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::BitSet);
// Type: System.Xml.Schema::BitSet
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11594))
// CS Name: ::System.Xml.Schema::BitSet*
class CORDL_TYPE BitSet : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field count offset 0x10
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field bits offset 0x18
 __declspec(property(get=__get_bits, put=__set_bits)) ::ArrayW<uint32_t,::Array<uint32_t>*>  bits;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) bool  Item[];

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_bits(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_bits() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_bits() const;

static inline ::System::Xml::Schema::BitSet* New_ctor() ;

/// @brief Method .ctor addr 0x28ac358 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::System::Xml::Schema::BitSet* New_ctor(int32_t  count) ;

/// @brief Method .ctor addr 0x28ac360 size 0x70 virtual false final false
inline void _ctor(int32_t  count) ;

/// @brief Method get_Count addr 0x28ac3d8 size 0x8 virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x28ac3e0 size 0x4 virtual false final false
inline bool get_Item(int32_t  index) ;

/// @brief Method Clear addr 0x28ac440 size 0x54 virtual false final false
inline void Clear() ;

/// @brief Method Set addr 0x28ac494 size 0x5c virtual false final false
inline void Set(int32_t  index) ;

/// @brief Method Get addr 0x28ac3e4 size 0x5c virtual false final false
inline bool Get(int32_t  index) ;

/// @brief Method NextSet addr 0x28ac584 size 0x9c virtual false final false
inline int32_t NextSet(int32_t  startFrom) ;

/// @brief Method And addr 0x28ac620 size 0xb8 virtual false final false
inline void And(::System::Xml::Schema::BitSet*  other) ;

/// @brief Method Or addr 0x28ac6d8 size 0xa4 virtual false final false
inline void Or(::System::Xml::Schema::BitSet*  other) ;

/// @brief Method GetHashCode addr 0x28ac77c size 0x38 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x28ac7b4 size 0x148 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Clone addr 0x28ac8fc size 0xd4 virtual false final false
inline ::System::Xml::Schema::BitSet* Clone() ;

/// @brief Method Intersects addr 0x28ac9d0 size 0xe0 virtual false final false
inline bool Intersects(::System::Xml::Schema::BitSet*  other) ;

/// @brief Method Subscript addr 0x28ac3d0 size 0x8 virtual false final false
inline int32_t Subscript(int32_t  bitIndex) ;

/// @brief Method EnsureLength addr 0x28ac4f0 size 0x94 virtual false final false
inline void EnsureLength(int32_t  nRequiredLength) ;

// Ctor Parameters [CppParam { name: "", ty: "BitSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitSet(BitSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitSet(BitSet const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BitSet()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::BitSet, 0x20>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::BitSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::BitSet*, "System.Xml.Schema", "BitSet");
