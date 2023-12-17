#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationHeaderRecord)
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SerializationHeaderRecord;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord);
// Type: System.Runtime.Serialization.Formatters.Binary::SerializationHeaderRecord
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3258))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::SerializationHeaderRecord*
class CORDL_TYPE SerializationHeaderRecord : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field binaryFormatterMajorVersion offset 0x10
 __declspec(property(get=__get_binaryFormatterMajorVersion, put=__set_binaryFormatterMajorVersion)) int32_t  binaryFormatterMajorVersion;

/// @brief Field binaryFormatterMinorVersion offset 0x14
 __declspec(property(get=__get_binaryFormatterMinorVersion, put=__set_binaryFormatterMinorVersion)) int32_t  binaryFormatterMinorVersion;

/// @brief Field binaryHeaderEnum offset 0x18
 __declspec(property(get=__get_binaryHeaderEnum, put=__set_binaryHeaderEnum)) ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  binaryHeaderEnum;

/// @brief Field topId offset 0x1c
 __declspec(property(get=__get_topId, put=__set_topId)) int32_t  topId;

/// @brief Field headerId offset 0x20
 __declspec(property(get=__get_headerId, put=__set_headerId)) int32_t  headerId;

/// @brief Field majorVersion offset 0x24
 __declspec(property(get=__get_majorVersion, put=__set_majorVersion)) int32_t  majorVersion;

/// @brief Field minorVersion offset 0x28
 __declspec(property(get=__get_minorVersion, put=__set_minorVersion)) int32_t  minorVersion;

constexpr void __set_binaryFormatterMajorVersion(int32_t  value) ;

constexpr int32_t& __get_binaryFormatterMajorVersion() ;

constexpr int32_t const& __get_binaryFormatterMajorVersion() const;

constexpr void __set_binaryFormatterMinorVersion(int32_t  value) ;

constexpr int32_t& __get_binaryFormatterMinorVersion() ;

constexpr int32_t const& __get_binaryFormatterMinorVersion() const;

constexpr void __set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& __get_binaryHeaderEnum() ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const& __get_binaryHeaderEnum() const;

constexpr void __set_topId(int32_t  value) ;

constexpr int32_t& __get_topId() ;

constexpr int32_t const& __get_topId() const;

constexpr void __set_headerId(int32_t  value) ;

constexpr int32_t& __get_headerId() ;

constexpr int32_t const& __get_headerId() const;

constexpr void __set_majorVersion(int32_t  value) ;

constexpr int32_t& __get_majorVersion() ;

constexpr int32_t const& __get_majorVersion() const;

constexpr void __set_minorVersion(int32_t  value) ;

constexpr int32_t& __get_minorVersion() ;

constexpr int32_t const& __get_minorVersion() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord* New_ctor() ;

/// @brief Method .ctor addr 0x24c1ad4 size 0x10 virtual false final false
inline void _ctor() ;

static inline ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord* New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  binaryHeaderEnum, int32_t  topId, int32_t  headerId, int32_t  majorVersion, int32_t  minorVersion) ;

/// @brief Method .ctor addr 0x24c1ae4 size 0x58 virtual false final false
inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  binaryHeaderEnum, int32_t  topId, int32_t  headerId, int32_t  majorVersion, int32_t  minorVersion) ;

/// @brief Method Write addr 0x24c1b3c size 0xb0 virtual true final true
inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*  sout) ;

/// @brief Method GetInt32 addr 0x24c1bec size 0x74 virtual false final false
static inline int32_t GetInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index) ;

/// @brief Method Read addr 0x24c1c60 size 0x164 virtual true final true
inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*  input) ;

/// @brief Method Dump addr 0x24c1dc4 size 0x4 virtual false final false
inline void Dump() ;

// Ctor Parameters [CppParam { name: "", ty: "SerializationHeaderRecord", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationHeaderRecord(SerializationHeaderRecord && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationHeaderRecord", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationHeaderRecord(SerializationHeaderRecord const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerializationHeaderRecord()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, 0x30>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*, "System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord");
