#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundGradient)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundGradient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundGradient);
// Type: ::BloomPrePassBackgroundGradient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14459))
// CS Name: ::BloomPrePassBackgroundGradient*
class CORDL_TYPE BloomPrePassBackgroundGradient : public ::GlobalNamespace::BloomPrePassBackgroundTextureGradient {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::BloomPrePassBackgroundTextureGradient)]{};

/// @brief Field _gradient offset 0x40
 __declspec(property(get=__get__gradient, put=__set__gradient)) ::UnityEngine::Gradient*  _gradient;

constexpr void __set__gradient(::UnityEngine::Gradient*  value) ;

constexpr ::UnityEngine::Gradient* __get__gradient() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> __get__gradient() const;

/// @brief Method UpdatePixels addr 0x2104650 size 0x318 virtual true final false
inline void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  pixels, int32_t  numberOfPixels) ;

static inline ::GlobalNamespace::BloomPrePassBackgroundGradient* New_ctor() ;

/// @brief Method .ctor addr 0x2104968 size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundGradient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundGradient(BloomPrePassBackgroundGradient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundGradient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundGradient(BloomPrePassBackgroundGradient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundGradient()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundGradient, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundGradient*, "", "BloomPrePassBackgroundGradient");
