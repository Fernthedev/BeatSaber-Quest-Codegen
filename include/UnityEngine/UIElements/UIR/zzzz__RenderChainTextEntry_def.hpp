#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderChainTextEntry)
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderChainTextEntry;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderChainTextEntry);
// Type: UnityEngine.UIElements.UIR::RenderChainTextEntry
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7397))
// CS Name: ::UnityEngine.UIElements.UIR::RenderChainTextEntry
struct CORDL_TYPE RenderChainTextEntry : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field command offset 0x0
 __declspec(property(get=__get_command, put=__set_command)) ::UnityEngine::UIElements::UIR::RenderChainCommand*  command;

/// @brief Field firstVertex offset 0x8
 __declspec(property(get=__get_firstVertex, put=__set_firstVertex)) int32_t  firstVertex;

/// @brief Field vertexCount offset 0xc
 __declspec(property(get=__get_vertexCount, put=__set_vertexCount)) int32_t  vertexCount;

constexpr void __set_command(::UnityEngine::UIElements::UIR::RenderChainCommand*  value) ;

constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* __get_command() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> __get_command() const;

constexpr void __set_firstVertex(int32_t  value) ;

constexpr int32_t& __get_firstVertex() ;

constexpr int32_t const& __get_firstVertex() const;

constexpr void __set_vertexCount(int32_t  value) ;

constexpr int32_t& __get_vertexCount() ;

constexpr int32_t const& __get_vertexCount() const;

// Ctor Parameters [CppParam { name: "command", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "firstVertex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderChainTextEntry(::UnityEngine::UIElements::UIR::RenderChainCommand*  command, int32_t  firstVertex, int32_t  vertexCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderChainTextEntry(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderChainTextEntry()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChainTextEntry, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChainTextEntry, "UnityEngine.UIElements.UIR", "RenderChainTextEntry");
