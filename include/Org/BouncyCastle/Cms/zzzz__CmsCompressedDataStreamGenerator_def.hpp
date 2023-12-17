#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsCompressedDataStreamGenerator)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Cms {
class __CmsCompressedDataStreamGenerator__CmsCompressedOutputStream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsCompressedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class __CmsCompressedDataStreamGenerator__CmsCompressedOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream);
// Type: ::CmsCompressedOutputStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(631))
// CS Name: ::CmsCompressedDataStreamGenerator::CmsCompressedOutputStream*
class CORDL_TYPE __CmsCompressedDataStreamGenerator__CmsCompressedOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::Org::BouncyCastle::Utilities::IO::BaseOutputStream)]{};

/// @brief Field _out offset 0x30
 __declspec(property(get=__get__out, put=__set__out)) ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*  _out;

/// @brief Field _sGen offset 0x38
 __declspec(property(get=__get__sGen, put=__set__sGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  _sGen;

/// @brief Field _cGen offset 0x40
 __declspec(property(get=__get__cGen, put=__set__cGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  _cGen;

/// @brief Field _eiGen offset 0x48
 __declspec(property(get=__get__eiGen, put=__set__eiGen)) ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  _eiGen;

constexpr void __set__out(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*  value) ;

constexpr ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* __get__out() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*> __get__out() const;

constexpr void __set__sGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator*  value) ;

constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* __get__sGen() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> __get__sGen() const;

constexpr void __set__cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator*  value) ;

constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* __get__cGen() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> __get__cGen() const;

constexpr void __set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator*  value) ;

constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* __get__eiGen() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> __get__eiGen() const;

static inline ::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream* New_ctor(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*  outStream, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  sGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  cGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  eiGen) ;

/// @brief Method .ctor addr 0x11dd604 size 0x40 virtual false final false
inline void _ctor(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*  outStream, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  sGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  cGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*  eiGen) ;

/// @brief Method WriteByte addr 0x11dd644 size 0x24 virtual true final false
inline void WriteByte(uint8_t  b) ;

/// @brief Method Write addr 0x11dd668 size 0x24 virtual true final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  off, int32_t  len) ;

/// @brief Method Close addr 0x11dd68c size 0xa8 virtual true final false
inline void Close() ;

// Ctor Parameters [CppParam { name: "", ty: "__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream(__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream(__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CmsCompressedDataStreamGenerator__CmsCompressedOutputStream()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream, 0x50>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsCompressedDataStreamGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(632))
// CS Name: ::Org.BouncyCastle.Cms::CmsCompressedDataStreamGenerator*
class CORDL_TYPE CmsCompressedDataStreamGenerator : public ::System::Object {
public:
// Declarations
using CmsCompressedOutputStream = ::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field ZLib offset 0x0
static constexpr ::ConstString  ZLib{u"1.2.840.113549.1.9.16.3.8"};

/// @brief Field _bufferSize offset 0x10
 __declspec(property(get=__get__bufferSize, put=__set__bufferSize)) int32_t  _bufferSize;

constexpr void __set__bufferSize(int32_t  value) ;

constexpr int32_t& __get__bufferSize() ;

constexpr int32_t const& __get__bufferSize() const;

static inline ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x11dd2b4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method SetBufferSize addr 0x11dd2bc size 0x8 virtual false final false
inline void SetBufferSize(int32_t  bufferSize) ;

/// @brief Method Open addr 0x11dd2c4 size 0x7c virtual false final false
inline ::System::IO::Stream* Open(::System::IO::Stream*  outStream, ::StringW  compressionOID) ;

/// @brief Method Open addr 0x11dd340 size 0x2c4 virtual false final false
inline ::System::IO::Stream* Open(::System::IO::Stream*  outStream, ::StringW  contentOID, ::StringW  compressionOID) ;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataStreamGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsCompressedDataStreamGenerator(CmsCompressedDataStreamGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataStreamGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsCompressedDataStreamGenerator(CmsCompressedDataStreamGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsCompressedDataStreamGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*, "Org.BouncyCastle.Cms", "CmsCompressedDataStreamGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*, "Org.BouncyCastle.Cms", "CmsCompressedDataStreamGenerator/CmsCompressedOutputStream");
