#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderBuffer)
// Forward declare root types
namespace UnityEngine {
struct RenderBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderBuffer);
// Type: UnityEngine::RenderBuffer
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10084))
// CS Name: ::UnityEngine::RenderBuffer
struct CORDL_TYPE RenderBuffer : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_RenderTextureInstanceID offset 0x0
 __declspec(property(get=__get_m_RenderTextureInstanceID, put=__set_m_RenderTextureInstanceID)) int32_t  m_RenderTextureInstanceID;

/// @brief Field m_BufferPtr offset 0x8
 __declspec(property(get=__get_m_BufferPtr, put=__set_m_BufferPtr)) ::cordl_internals::intptr_t  m_BufferPtr;

constexpr void __set_m_RenderTextureInstanceID(int32_t  value) ;

constexpr int32_t& __get_m_RenderTextureInstanceID() ;

constexpr int32_t const& __get_m_RenderTextureInstanceID() const;

constexpr void __set_m_BufferPtr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_BufferPtr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_BufferPtr() const;

// Ctor Parameters [CppParam { name: "m_RenderTextureInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BufferPtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RenderBuffer(int32_t  m_RenderTextureInstanceID, ::cordl_internals::intptr_t  m_BufferPtr) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderBuffer, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderBuffer, "UnityEngine", "RenderBuffer");
