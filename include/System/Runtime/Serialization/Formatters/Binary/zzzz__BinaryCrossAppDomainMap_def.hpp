#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryCrossAppDomainMap)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainMap;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainMap
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3266))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainMap*
class CORDL_TYPE BinaryCrossAppDomainMap : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field crossAppDomainArrayIndex offset 0x10
 __declspec(property(get=__get_crossAppDomainArrayIndex, put=__set_crossAppDomainArrayIndex)) int32_t  crossAppDomainArrayIndex;

constexpr void __set_crossAppDomainArrayIndex(int32_t  value) ;

constexpr int32_t& __get_crossAppDomainArrayIndex() ;

constexpr int32_t const& __get_crossAppDomainArrayIndex() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap* New_ctor() ;

/// @brief Method .ctor addr 0x24c2428 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Read addr 0x24c2430 size 0x28 virtual true final true
inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*  input) ;

/// @brief Method Dump addr 0x24c2458 size 0x4 virtual false final false
inline void Dump() ;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryCrossAppDomainMap(BinaryCrossAppDomainMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryCrossAppDomainMap(BinaryCrossAppDomainMap const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BinaryCrossAppDomainMap()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainMap");
