#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PemWriter)
namespace System::IO {
class TextWriter;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemWriter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemWriter);
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemWriter
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1690))
// CS Name: ::Org.BouncyCastle.Utilities.IO.Pem::PemWriter*
class CORDL_TYPE PemWriter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field LineLength offset 0x0
static constexpr int32_t  LineLength{static_cast<int32_t>(0x40)};

/// @brief Field writer offset 0x10
 __declspec(property(get=__get_writer, put=__set_writer)) ::System::IO::TextWriter*  writer;

/// @brief Field nlLength offset 0x18
 __declspec(property(get=__get_nlLength, put=__set_nlLength)) int32_t  nlLength;

/// @brief Field buf offset 0x20
 __declspec(property(get=__get_buf, put=__set_buf)) ::ArrayW<char16_t,::Array<char16_t>*>  buf;

 __declspec(property(get=get_Writer)) ::System::IO::TextWriter*  Writer;

constexpr void __set_writer(::System::IO::TextWriter*  value) ;

constexpr ::System::IO::TextWriter* __get_writer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> __get_writer() const;

constexpr void __set_nlLength(int32_t  value) ;

constexpr int32_t& __get_nlLength() ;

constexpr int32_t const& __get_nlLength() const;

constexpr void __set_buf(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get_buf() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get_buf() const;

static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemWriter* New_ctor(::System::IO::TextWriter*  writer) ;

/// @brief Method .ctor addr 0x10d4088 size 0xfc virtual false final false
inline void _ctor(::System::IO::TextWriter*  writer) ;

/// @brief Method get_Writer addr 0x10d4184 size 0x8 virtual false final false
inline ::System::IO::TextWriter* get_Writer() ;

/// @brief Method GetOutputSize addr 0x10d418c size 0x4d8 virtual false final false
inline int32_t GetOutputSize(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*  obj) ;

/// @brief Method WriteObject addr 0x10d4664 size 0x54c virtual false final false
inline void WriteObject(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*  objGen) ;

/// @brief Method WriteEncoded addr 0x10d4c44 size 0xe0 virtual false final false
inline void WriteEncoded(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method WritePreEncapsulationBoundary addr 0x10d4bb0 size 0x94 virtual false final false
inline void WritePreEncapsulationBoundary(::StringW  type) ;

/// @brief Method WritePostEncapsulationBoundary addr 0x10d4d24 size 0x94 virtual false final false
inline void WritePostEncapsulationBoundary(::StringW  type) ;

// Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PemWriter(PemWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PemWriter(PemWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PemWriter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::Pem::PemWriter, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemWriter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemWriter*, "Org.BouncyCastle.Utilities.IO.Pem", "PemWriter");
