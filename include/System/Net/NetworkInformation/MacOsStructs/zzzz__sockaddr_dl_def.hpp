#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr_dl)
// Forward declare root types
namespace System::Net::NetworkInformation::MacOsStructs {
struct sockaddr_dl;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl);
// Type: System.Net.NetworkInformation.MacOsStructs::sockaddr_dl
namespace System::Net::NetworkInformation::MacOsStructs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9299))
// CS Name: ::System.Net.NetworkInformation.MacOsStructs::sockaddr_dl
struct CORDL_TYPE sockaddr_dl : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field sdl_len offset 0x0
 __declspec(property(get=__get_sdl_len, put=__set_sdl_len)) uint8_t  sdl_len;

/// @brief Field sdl_family offset 0x1
 __declspec(property(get=__get_sdl_family, put=__set_sdl_family)) uint8_t  sdl_family;

/// @brief Field sdl_index offset 0x2
 __declspec(property(get=__get_sdl_index, put=__set_sdl_index)) uint16_t  sdl_index;

/// @brief Field sdl_type offset 0x4
 __declspec(property(get=__get_sdl_type, put=__set_sdl_type)) uint8_t  sdl_type;

/// @brief Field sdl_nlen offset 0x5
 __declspec(property(get=__get_sdl_nlen, put=__set_sdl_nlen)) uint8_t  sdl_nlen;

/// @brief Field sdl_alen offset 0x6
 __declspec(property(get=__get_sdl_alen, put=__set_sdl_alen)) uint8_t  sdl_alen;

/// @brief Field sdl_slen offset 0x7
 __declspec(property(get=__get_sdl_slen, put=__set_sdl_slen)) uint8_t  sdl_slen;

/// @brief Field sdl_data offset 0x8
 __declspec(property(get=__get_sdl_data, put=__set_sdl_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  sdl_data;

constexpr void __set_sdl_len(uint8_t  value) ;

constexpr uint8_t& __get_sdl_len() ;

constexpr uint8_t const& __get_sdl_len() const;

constexpr void __set_sdl_family(uint8_t  value) ;

constexpr uint8_t& __get_sdl_family() ;

constexpr uint8_t const& __get_sdl_family() const;

constexpr void __set_sdl_index(uint16_t  value) ;

constexpr uint16_t& __get_sdl_index() ;

constexpr uint16_t const& __get_sdl_index() const;

constexpr void __set_sdl_type(uint8_t  value) ;

constexpr uint8_t& __get_sdl_type() ;

constexpr uint8_t const& __get_sdl_type() const;

constexpr void __set_sdl_nlen(uint8_t  value) ;

constexpr uint8_t& __get_sdl_nlen() ;

constexpr uint8_t const& __get_sdl_nlen() const;

constexpr void __set_sdl_alen(uint8_t  value) ;

constexpr uint8_t& __get_sdl_alen() ;

constexpr uint8_t const& __get_sdl_alen() const;

constexpr void __set_sdl_slen(uint8_t  value) ;

constexpr uint8_t& __get_sdl_slen() ;

constexpr uint8_t const& __get_sdl_slen() const;

constexpr void __set_sdl_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_sdl_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_sdl_data() const;

/// @brief Method Read addr 0x29f0008 size 0x190 virtual false final false
inline void Read(::cordl_internals::intptr_t  ptr) ;

// Ctor Parameters [CppParam { name: "sdl_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_family", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_index", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sdl_type", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_nlen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_alen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_slen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
constexpr sockaddr_dl(uint8_t  sdl_len, uint8_t  sdl_family, uint16_t  sdl_index, uint8_t  sdl_type, uint8_t  sdl_nlen, uint8_t  sdl_alen, uint8_t  sdl_slen, ::ArrayW<uint8_t,::Array<uint8_t>*>  sdl_data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit sockaddr_dl(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 sockaddr_dl()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::MacOsStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsStructs::sockaddr_dl, "System.Net.NetworkInformation.MacOsStructs", "sockaddr_dl");
