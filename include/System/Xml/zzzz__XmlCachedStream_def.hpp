#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
CORDL_MODULE_EXPORT(XmlCachedStream)
namespace System::IO {
class Stream;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlCachedStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlCachedStream);
// Type: System.Xml::XmlCachedStream
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11554))
// CS Name: ::System.Xml::XmlCachedStream*
class CORDL_TYPE XmlCachedStream : public ::System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::IO::MemoryStream)]{};

/// @brief Field uri offset 0x50
 __declspec(property(get=__get_uri, put=__set_uri)) ::System::Uri*  uri;

constexpr void __set_uri(::System::Uri*  value) ;

constexpr ::System::Uri* __get_uri() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get_uri() const;

static inline ::System::Xml::XmlCachedStream* New_ctor(::System::Uri*  uri, ::System::IO::Stream*  stream) ;

/// @brief Method .ctor addr 0x28a42cc size 0x174 virtual false final false
inline void _ctor(::System::Uri*  uri, ::System::IO::Stream*  stream) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlCachedStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlCachedStream(XmlCachedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlCachedStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlCachedStream(XmlCachedStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlCachedStream()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCachedStream, 0x58>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlCachedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCachedStream*, "System.Xml", "XmlCachedStream");
