#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImageAttrib)
namespace Org::BouncyCastle::Bcpg::Attr {
struct __ImageAttrib__Format;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Attr {
struct __ImageAttrib__Format;
}
namespace Org::BouncyCastle::Bcpg::Attr {
class ImageAttrib;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib);
// Type: ::Format
namespace Org::BouncyCastle::Bcpg::Attr {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(529))
// CS Name: ::ImageAttrib::Format
struct CORDL_TYPE __ImageAttrib__Format : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ____ImageAttrib__Format_Unwrapped
enum struct ____ImageAttrib__Format_Unwrapped : uint8_t {
__E_Jpeg = static_cast<uint8_t>(0x1u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Jpeg value: static_cast<uint8_t>(0x1u)
static ::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format const Jpeg;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ImageAttrib__Format_Unwrapped () const noexcept {
return std::bit_cast<____ImageAttrib__Format_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __ImageAttrib__Format(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ImageAttrib__Format(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ImageAttrib__Format()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format, 0x1>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::Attr
// Type: Org.BouncyCastle.Bcpg.Attr::ImageAttrib
namespace Org::BouncyCastle::Bcpg::Attr {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(528))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(530))
// CS Name: ::Org.BouncyCastle.Bcpg.Attr::ImageAttrib*
class CORDL_TYPE ImageAttrib : public ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket {
public:
// Declarations
using Format = ::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Org::BouncyCastle::Bcpg::UserAttributeSubpacket)]{};

/// @brief Field hdrLength offset 0x20
 __declspec(property(get=__get_hdrLength, put=__set_hdrLength)) int32_t  hdrLength;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _encoding offset 0x28
 __declspec(property(get=__get__encoding, put=__set__encoding)) int32_t  _encoding;

/// @brief Field imageData offset 0x30
 __declspec(property(get=__get_imageData, put=__set_imageData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  imageData;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_Encoding)) int32_t  Encoding;

static inline void setStaticF_Zeroes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_Zeroes() ;

constexpr void __set_hdrLength(int32_t  value) ;

constexpr int32_t& __get_hdrLength() ;

constexpr int32_t const& __get_hdrLength() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__encoding(int32_t  value) ;

constexpr int32_t& __get__encoding() ;

constexpr int32_t const& __get__encoding() const;

constexpr void __set_imageData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_imageData() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_imageData() const;

static inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x11c6ed0 size 0xc virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* New_ctor(bool  forceLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x11c6edc size 0xdc virtual false final false
inline void _ctor(bool  forceLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* New_ctor(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format  imageType, ::ArrayW<uint8_t,::Array<uint8_t>*>  imageData) ;

/// @brief Method .ctor addr 0x11c6fb8 size 0x78 virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format  imageType, ::ArrayW<uint8_t,::Array<uint8_t>*>  imageData) ;

/// @brief Method ToByteArray addr 0x11c7030 size 0x14c virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ToByteArray(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format  imageType, ::ArrayW<uint8_t,::Array<uint8_t>*>  imageData) ;

/// @brief Method get_Version addr 0x11c717c size 0x8 virtual true final false
inline int32_t get_Version() ;

/// @brief Method get_Encoding addr 0x11c7184 size 0x8 virtual true final false
inline int32_t get_Encoding() ;

/// @brief Method GetImageData addr 0x11c718c size 0x8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetImageData() ;

// Ctor Parameters [CppParam { name: "", ty: "ImageAttrib", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageAttrib(ImageAttrib && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageAttrib", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageAttrib(ImageAttrib const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ImageAttrib()  = default;
public:


// Fields

// Static field Zeroes


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::Attr
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format, "Org.BouncyCastle.Bcpg.Attr", "ImageAttrib/Format");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*, "Org.BouncyCastle.Bcpg.Attr", "ImageAttrib");
