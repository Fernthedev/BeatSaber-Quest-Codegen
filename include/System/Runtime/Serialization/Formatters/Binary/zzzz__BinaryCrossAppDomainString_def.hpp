#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryCrossAppDomainString)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainString;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainString
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3265))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainString*
class CORDL_TYPE BinaryCrossAppDomainString : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field objectId offset 0x10
 __declspec(property(get=__get_objectId, put=__set_objectId)) int32_t  objectId;

/// @brief Field value offset 0x14
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

constexpr void __set_objectId(int32_t  value) ;

constexpr int32_t& __get_objectId() ;

constexpr int32_t const& __get_objectId() const;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* New_ctor() ;

/// @brief Method .ctor addr 0x24c23d8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Read addr 0x24c23e0 size 0x44 virtual true final true
inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*  input) ;

/// @brief Method Dump addr 0x24c2424 size 0x4 virtual false final false
inline void Dump() ;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryCrossAppDomainString(BinaryCrossAppDomainString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryCrossAppDomainString(BinaryCrossAppDomainString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BinaryCrossAppDomainString()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainString");
