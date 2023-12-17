#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalKeyword)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GlobalKeyword);
// Type: UnityEngine.Rendering::GlobalKeyword
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10370))
// CS Name: ::UnityEngine.Rendering::GlobalKeyword
struct CORDL_TYPE GlobalKeyword : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Name offset 0x0
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::StringW  m_Name;

/// @brief Field m_Index offset 0x8
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) uint32_t  m_Index;

constexpr void __set_m_Name(::StringW  value) ;

constexpr ::StringW& __get_m_Name() ;

constexpr ::StringW const& __get_m_Name() const;

constexpr void __set_m_Index(uint32_t  value) ;

constexpr uint32_t& __get_m_Index() ;

constexpr uint32_t const& __get_m_Index() const;

/// @brief Method ToString addr 0x2cef1f0 size 0x8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GlobalKeyword(::StringW  m_Name, uint32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlobalKeyword(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlobalKeyword()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GlobalKeyword, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GlobalKeyword, "UnityEngine.Rendering", "GlobalKeyword");
