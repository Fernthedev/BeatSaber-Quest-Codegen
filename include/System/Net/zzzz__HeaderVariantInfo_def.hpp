#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HeaderVariantInfo)
namespace System::Net {
struct CookieVariant;
}
// Forward declare root types
namespace System::Net {
struct HeaderVariantInfo;
}
// Write type traits
MARK_VAL_T(::System::Net::HeaderVariantInfo);
// Type: System.Net::HeaderVariantInfo
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9129))
// CS Name: ::System.Net::HeaderVariantInfo
struct CORDL_TYPE HeaderVariantInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_name offset 0x0
 __declspec(property(get=__get_m_name, put=__set_m_name)) ::StringW  m_name;

/// @brief Field m_variant offset 0x8
 __declspec(property(get=__get_m_variant, put=__set_m_variant)) ::System::Net::CookieVariant  m_variant;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Variant)) ::System::Net::CookieVariant  Variant;

constexpr void __set_m_name(::StringW  value) ;

constexpr ::StringW& __get_m_name() ;

constexpr ::StringW const& __get_m_name() const;

constexpr void __set_m_variant(::System::Net::CookieVariant  value) ;

constexpr ::System::Net::CookieVariant& __get_m_variant() ;

constexpr ::System::Net::CookieVariant const& __get_m_variant() const;

/// @brief Method .ctor addr 0x29aee20 size 0xc virtual false final false
inline void _ctor(::StringW  name, ::System::Net::CookieVariant  variant) ;

/// @brief Method get_Name addr 0x29aee2c size 0x8 virtual false final false
inline ::StringW get_Name() ;

/// @brief Method get_Variant addr 0x29aee34 size 0x8 virtual false final false
inline ::System::Net::CookieVariant get_Variant() ;

// Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_variant", ty: "::System::Net::CookieVariant", modifiers: "", def_value: None }]
constexpr HeaderVariantInfo(::StringW  m_name, ::System::Net::CookieVariant  m_variant) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HeaderVariantInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HeaderVariantInfo()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HeaderVariantInfo, 0x10>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HeaderVariantInfo, "System.Net", "HeaderVariantInfo");
