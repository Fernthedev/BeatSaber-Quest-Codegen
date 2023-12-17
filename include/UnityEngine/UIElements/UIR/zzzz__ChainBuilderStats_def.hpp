#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChainBuilderStats)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::ChainBuilderStats);
// Type: UnityEngine.UIElements.UIR::ChainBuilderStats
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7388))
// CS Name: ::UnityEngine.UIElements.UIR::ChainBuilderStats
struct CORDL_TYPE ChainBuilderStats : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field elementsAdded offset 0x0
 __declspec(property(get=__get_elementsAdded, put=__set_elementsAdded)) uint32_t  elementsAdded;

/// @brief Field elementsRemoved offset 0x4
 __declspec(property(get=__get_elementsRemoved, put=__set_elementsRemoved)) uint32_t  elementsRemoved;

/// @brief Field recursiveClipUpdates offset 0x8
 __declspec(property(get=__get_recursiveClipUpdates, put=__set_recursiveClipUpdates)) uint32_t  recursiveClipUpdates;

/// @brief Field recursiveClipUpdatesExpanded offset 0xc
 __declspec(property(get=__get_recursiveClipUpdatesExpanded, put=__set_recursiveClipUpdatesExpanded)) uint32_t  recursiveClipUpdatesExpanded;

/// @brief Field nonRecursiveClipUpdates offset 0x10
 __declspec(property(get=__get_nonRecursiveClipUpdates, put=__set_nonRecursiveClipUpdates)) uint32_t  nonRecursiveClipUpdates;

/// @brief Field recursiveTransformUpdates offset 0x14
 __declspec(property(get=__get_recursiveTransformUpdates, put=__set_recursiveTransformUpdates)) uint32_t  recursiveTransformUpdates;

/// @brief Field recursiveTransformUpdatesExpanded offset 0x18
 __declspec(property(get=__get_recursiveTransformUpdatesExpanded, put=__set_recursiveTransformUpdatesExpanded)) uint32_t  recursiveTransformUpdatesExpanded;

/// @brief Field recursiveOpacityUpdates offset 0x1c
 __declspec(property(get=__get_recursiveOpacityUpdates, put=__set_recursiveOpacityUpdates)) uint32_t  recursiveOpacityUpdates;

/// @brief Field recursiveOpacityUpdatesExpanded offset 0x20
 __declspec(property(get=__get_recursiveOpacityUpdatesExpanded, put=__set_recursiveOpacityUpdatesExpanded)) uint32_t  recursiveOpacityUpdatesExpanded;

/// @brief Field colorUpdates offset 0x24
 __declspec(property(get=__get_colorUpdates, put=__set_colorUpdates)) uint32_t  colorUpdates;

/// @brief Field colorUpdatesExpanded offset 0x28
 __declspec(property(get=__get_colorUpdatesExpanded, put=__set_colorUpdatesExpanded)) uint32_t  colorUpdatesExpanded;

/// @brief Field recursiveVisualUpdates offset 0x2c
 __declspec(property(get=__get_recursiveVisualUpdates, put=__set_recursiveVisualUpdates)) uint32_t  recursiveVisualUpdates;

/// @brief Field recursiveVisualUpdatesExpanded offset 0x30
 __declspec(property(get=__get_recursiveVisualUpdatesExpanded, put=__set_recursiveVisualUpdatesExpanded)) uint32_t  recursiveVisualUpdatesExpanded;

/// @brief Field nonRecursiveVisualUpdates offset 0x34
 __declspec(property(get=__get_nonRecursiveVisualUpdates, put=__set_nonRecursiveVisualUpdates)) uint32_t  nonRecursiveVisualUpdates;

/// @brief Field dirtyProcessed offset 0x38
 __declspec(property(get=__get_dirtyProcessed, put=__set_dirtyProcessed)) uint32_t  dirtyProcessed;

/// @brief Field nudgeTransformed offset 0x3c
 __declspec(property(get=__get_nudgeTransformed, put=__set_nudgeTransformed)) uint32_t  nudgeTransformed;

/// @brief Field boneTransformed offset 0x40
 __declspec(property(get=__get_boneTransformed, put=__set_boneTransformed)) uint32_t  boneTransformed;

/// @brief Field skipTransformed offset 0x44
 __declspec(property(get=__get_skipTransformed, put=__set_skipTransformed)) uint32_t  skipTransformed;

/// @brief Field visualUpdateTransformed offset 0x48
 __declspec(property(get=__get_visualUpdateTransformed, put=__set_visualUpdateTransformed)) uint32_t  visualUpdateTransformed;

/// @brief Field updatedMeshAllocations offset 0x4c
 __declspec(property(get=__get_updatedMeshAllocations, put=__set_updatedMeshAllocations)) uint32_t  updatedMeshAllocations;

/// @brief Field newMeshAllocations offset 0x50
 __declspec(property(get=__get_newMeshAllocations, put=__set_newMeshAllocations)) uint32_t  newMeshAllocations;

/// @brief Field groupTransformElementsChanged offset 0x54
 __declspec(property(get=__get_groupTransformElementsChanged, put=__set_groupTransformElementsChanged)) uint32_t  groupTransformElementsChanged;

/// @brief Field immedateRenderersActive offset 0x58
 __declspec(property(get=__get_immedateRenderersActive, put=__set_immedateRenderersActive)) uint32_t  immedateRenderersActive;

/// @brief Field textUpdates offset 0x5c
 __declspec(property(get=__get_textUpdates, put=__set_textUpdates)) uint32_t  textUpdates;

constexpr void __set_elementsAdded(uint32_t  value) ;

constexpr uint32_t& __get_elementsAdded() ;

constexpr uint32_t const& __get_elementsAdded() const;

constexpr void __set_elementsRemoved(uint32_t  value) ;

constexpr uint32_t& __get_elementsRemoved() ;

constexpr uint32_t const& __get_elementsRemoved() const;

constexpr void __set_recursiveClipUpdates(uint32_t  value) ;

constexpr uint32_t& __get_recursiveClipUpdates() ;

constexpr uint32_t const& __get_recursiveClipUpdates() const;

constexpr void __set_recursiveClipUpdatesExpanded(uint32_t  value) ;

constexpr uint32_t& __get_recursiveClipUpdatesExpanded() ;

constexpr uint32_t const& __get_recursiveClipUpdatesExpanded() const;

constexpr void __set_nonRecursiveClipUpdates(uint32_t  value) ;

constexpr uint32_t& __get_nonRecursiveClipUpdates() ;

constexpr uint32_t const& __get_nonRecursiveClipUpdates() const;

constexpr void __set_recursiveTransformUpdates(uint32_t  value) ;

constexpr uint32_t& __get_recursiveTransformUpdates() ;

constexpr uint32_t const& __get_recursiveTransformUpdates() const;

constexpr void __set_recursiveTransformUpdatesExpanded(uint32_t  value) ;

constexpr uint32_t& __get_recursiveTransformUpdatesExpanded() ;

constexpr uint32_t const& __get_recursiveTransformUpdatesExpanded() const;

constexpr void __set_recursiveOpacityUpdates(uint32_t  value) ;

constexpr uint32_t& __get_recursiveOpacityUpdates() ;

constexpr uint32_t const& __get_recursiveOpacityUpdates() const;

constexpr void __set_recursiveOpacityUpdatesExpanded(uint32_t  value) ;

constexpr uint32_t& __get_recursiveOpacityUpdatesExpanded() ;

constexpr uint32_t const& __get_recursiveOpacityUpdatesExpanded() const;

constexpr void __set_colorUpdates(uint32_t  value) ;

constexpr uint32_t& __get_colorUpdates() ;

constexpr uint32_t const& __get_colorUpdates() const;

constexpr void __set_colorUpdatesExpanded(uint32_t  value) ;

constexpr uint32_t& __get_colorUpdatesExpanded() ;

constexpr uint32_t const& __get_colorUpdatesExpanded() const;

constexpr void __set_recursiveVisualUpdates(uint32_t  value) ;

constexpr uint32_t& __get_recursiveVisualUpdates() ;

constexpr uint32_t const& __get_recursiveVisualUpdates() const;

constexpr void __set_recursiveVisualUpdatesExpanded(uint32_t  value) ;

constexpr uint32_t& __get_recursiveVisualUpdatesExpanded() ;

constexpr uint32_t const& __get_recursiveVisualUpdatesExpanded() const;

constexpr void __set_nonRecursiveVisualUpdates(uint32_t  value) ;

constexpr uint32_t& __get_nonRecursiveVisualUpdates() ;

constexpr uint32_t const& __get_nonRecursiveVisualUpdates() const;

constexpr void __set_dirtyProcessed(uint32_t  value) ;

constexpr uint32_t& __get_dirtyProcessed() ;

constexpr uint32_t const& __get_dirtyProcessed() const;

constexpr void __set_nudgeTransformed(uint32_t  value) ;

constexpr uint32_t& __get_nudgeTransformed() ;

constexpr uint32_t const& __get_nudgeTransformed() const;

constexpr void __set_boneTransformed(uint32_t  value) ;

constexpr uint32_t& __get_boneTransformed() ;

constexpr uint32_t const& __get_boneTransformed() const;

constexpr void __set_skipTransformed(uint32_t  value) ;

constexpr uint32_t& __get_skipTransformed() ;

constexpr uint32_t const& __get_skipTransformed() const;

constexpr void __set_visualUpdateTransformed(uint32_t  value) ;

constexpr uint32_t& __get_visualUpdateTransformed() ;

constexpr uint32_t const& __get_visualUpdateTransformed() const;

constexpr void __set_updatedMeshAllocations(uint32_t  value) ;

constexpr uint32_t& __get_updatedMeshAllocations() ;

constexpr uint32_t const& __get_updatedMeshAllocations() const;

constexpr void __set_newMeshAllocations(uint32_t  value) ;

constexpr uint32_t& __get_newMeshAllocations() ;

constexpr uint32_t const& __get_newMeshAllocations() const;

constexpr void __set_groupTransformElementsChanged(uint32_t  value) ;

constexpr uint32_t& __get_groupTransformElementsChanged() ;

constexpr uint32_t const& __get_groupTransformElementsChanged() const;

constexpr void __set_immedateRenderersActive(uint32_t  value) ;

constexpr uint32_t& __get_immedateRenderersActive() ;

constexpr uint32_t const& __get_immedateRenderersActive() const;

constexpr void __set_textUpdates(uint32_t  value) ;

constexpr uint32_t& __get_textUpdates() ;

constexpr uint32_t const& __get_textUpdates() const;

// Ctor Parameters [CppParam { name: "elementsAdded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "elementsRemoved", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveClipUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveClipUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nonRecursiveClipUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveTransformUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveTransformUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveOpacityUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveOpacityUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "colorUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "colorUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveVisualUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveVisualUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nonRecursiveVisualUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "dirtyProcessed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nudgeTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "boneTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "skipTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "visualUpdateTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "updatedMeshAllocations", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "newMeshAllocations", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "groupTransformElementsChanged", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "immedateRenderersActive", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "textUpdates", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ChainBuilderStats(uint32_t  elementsAdded, uint32_t  elementsRemoved, uint32_t  recursiveClipUpdates, uint32_t  recursiveClipUpdatesExpanded, uint32_t  nonRecursiveClipUpdates, uint32_t  recursiveTransformUpdates, uint32_t  recursiveTransformUpdatesExpanded, uint32_t  recursiveOpacityUpdates, uint32_t  recursiveOpacityUpdatesExpanded, uint32_t  colorUpdates, uint32_t  colorUpdatesExpanded, uint32_t  recursiveVisualUpdates, uint32_t  recursiveVisualUpdatesExpanded, uint32_t  nonRecursiveVisualUpdates, uint32_t  dirtyProcessed, uint32_t  nudgeTransformed, uint32_t  boneTransformed, uint32_t  skipTransformed, uint32_t  visualUpdateTransformed, uint32_t  updatedMeshAllocations, uint32_t  newMeshAllocations, uint32_t  groupTransformElementsChanged, uint32_t  immedateRenderersActive, uint32_t  textUpdates) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ChainBuilderStats(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ChainBuilderStats()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::ChainBuilderStats, 0x60>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ChainBuilderStats, "UnityEngine.UIElements.UIR", "ChainBuilderStats");
