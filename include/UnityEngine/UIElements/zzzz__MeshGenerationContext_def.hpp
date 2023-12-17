#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationContext)
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine::UIElements {
class IStylePainter;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags);
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshGenerationContext);
// Type: ::MeshFlags
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7337))
// CS Name: ::MeshGenerationContext::MeshFlags
struct CORDL_TYPE __MeshGenerationContext__MeshFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MeshGenerationContext__MeshFlags_Unwrapped
enum struct ____MeshGenerationContext__MeshFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_UVisDisplacement = static_cast<int32_t>(0x1),
__E_SkipDynamicAtlas = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags const None;

/// @brief Field UVisDisplacement value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags const UVisDisplacement;

/// @brief Field SkipDynamicAtlas value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags const SkipDynamicAtlas;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MeshGenerationContext__MeshFlags_Unwrapped () const noexcept {
return std::bit_cast<____MeshGenerationContext__MeshFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MeshGenerationContext__MeshFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MeshGenerationContext__MeshFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MeshGenerationContext__MeshFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::MeshGenerationContext
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7338))
// CS Name: ::UnityEngine.UIElements::MeshGenerationContext*
class CORDL_TYPE MeshGenerationContext : public ::System::Object {
public:
// Declarations
using MeshFlags = ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field painter offset 0x10
 __declspec(property(get=__get_painter, put=__set_painter)) ::UnityEngine::UIElements::IStylePainter*  painter;

constexpr void __set_painter(::UnityEngine::UIElements::IStylePainter*  value) ;

constexpr ::UnityEngine::UIElements::IStylePainter* __get_painter() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IStylePainter*> __get_painter() const;

static inline ::UnityEngine::UIElements::MeshGenerationContext* New_ctor(::UnityEngine::UIElements::IStylePainter*  painter) ;

/// @brief Method .ctor addr 0x2e7c390 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::UIElements::IStylePainter*  painter) ;

// Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshGenerationContext(MeshGenerationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshGenerationContext(MeshGenerationContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MeshGenerationContext()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationContext, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags, "UnityEngine.UIElements", "MeshGenerationContext/MeshFlags");
NEED_NO_BOX(::UnityEngine::UIElements::MeshGenerationContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationContext*, "UnityEngine.UIElements", "MeshGenerationContext");
