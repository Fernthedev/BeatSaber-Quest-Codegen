#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VectorImageRenderInfo)
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::VectorImageRenderInfo);
// Type: UnityEngine.UIElements.UIR::VectorImageRenderInfo
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7399)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7399), inst: 413 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7419))
// CS Name: ::UnityEngine.UIElements.UIR::VectorImageRenderInfo*
class CORDL_TYPE VectorImageRenderInfo : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>)]{};

/// @brief Field useCount offset 0x18
 __declspec(property(get=__get_useCount, put=__set_useCount)) int32_t  useCount;

/// @brief Field firstGradientRemap offset 0x20
 __declspec(property(get=__get_firstGradientRemap, put=__set_firstGradientRemap)) ::UnityEngine::UIElements::UIR::GradientRemap*  firstGradientRemap;

/// @brief Field gradientSettingsAlloc offset 0x28
 __declspec(property(get=__get_gradientSettingsAlloc, put=__set_gradientSettingsAlloc)) ::UnityEngine::UIElements::UIR::Alloc  gradientSettingsAlloc;

constexpr void __set_useCount(int32_t  value) ;

constexpr int32_t& __get_useCount() ;

constexpr int32_t const& __get_useCount() const;

constexpr void __set_firstGradientRemap(::UnityEngine::UIElements::UIR::GradientRemap*  value) ;

constexpr ::UnityEngine::UIElements::UIR::GradientRemap* __get_firstGradientRemap() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GradientRemap*> __get_firstGradientRemap() const;

constexpr void __set_gradientSettingsAlloc(::UnityEngine::UIElements::UIR::Alloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::Alloc& __get_gradientSettingsAlloc() ;

constexpr ::UnityEngine::UIElements::UIR::Alloc const& __get_gradientSettingsAlloc() const;

/// @brief Method Reset addr 0x2dccea8 size 0x10 virtual false final false
inline void Reset() ;

static inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfo* New_ctor() ;

/// @brief Method .ctor addr 0x2dcce40 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorImageRenderInfo(VectorImageRenderInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorImageRenderInfo(VectorImageRenderInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VectorImageRenderInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::VectorImageRenderInfo, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::VectorImageRenderInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VectorImageRenderInfo*, "UnityEngine.UIElements.UIR", "VectorImageRenderInfo");
