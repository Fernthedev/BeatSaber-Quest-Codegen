#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformData)
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransformData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TransformData);
// Type: UnityEngine.UIElements::TransformData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7359))
// CS Name: ::UnityEngine.UIElements::TransformData
struct CORDL_TYPE TransformData : public ::bs_hook::ValueTypeWrapper<0x54> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x54};

/// @brief Field rotate offset 0x0
 __declspec(property(get=__get_rotate, put=__set_rotate)) ::UnityEngine::UIElements::Rotate  rotate;

/// @brief Field scale offset 0x18
 __declspec(property(get=__get_scale, put=__set_scale)) ::UnityEngine::UIElements::Scale  scale;

/// @brief Field transformOrigin offset 0x28
 __declspec(property(get=__get_transformOrigin, put=__set_transformOrigin)) ::UnityEngine::UIElements::TransformOrigin  transformOrigin;

/// @brief Field translate offset 0x3c
 __declspec(property(get=__get_translate, put=__set_translate)) ::UnityEngine::UIElements::Translate  translate;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>"
constexpr operator  ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TransformData>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::TransformData>*() ;

constexpr void __set_rotate(::UnityEngine::UIElements::Rotate  value) ;

constexpr ::UnityEngine::UIElements::Rotate& __get_rotate() ;

constexpr ::UnityEngine::UIElements::Rotate const& __get_rotate() const;

constexpr void __set_scale(::UnityEngine::UIElements::Scale  value) ;

constexpr ::UnityEngine::UIElements::Scale& __get_scale() ;

constexpr ::UnityEngine::UIElements::Scale const& __get_scale() const;

constexpr void __set_transformOrigin(::UnityEngine::UIElements::TransformOrigin  value) ;

constexpr ::UnityEngine::UIElements::TransformOrigin& __get_transformOrigin() ;

constexpr ::UnityEngine::UIElements::TransformOrigin const& __get_transformOrigin() const;

constexpr void __set_translate(::UnityEngine::UIElements::Translate  value) ;

constexpr ::UnityEngine::UIElements::Translate& __get_translate() ;

constexpr ::UnityEngine::UIElements::Translate const& __get_translate() const;

/// @brief Method Copy addr 0x2e843b8 size 0x1c virtual true final true
inline ::UnityEngine::UIElements::TransformData Copy() ;

/// @brief Method CopyFrom addr 0x2e843d4 size 0x14 virtual true final true
inline void CopyFrom(ByRef<::UnityEngine::UIElements::TransformData>  other) ;

/// @brief Method op_Equality addr 0x2e843e8 size 0x128 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::TransformData  lhs, ::UnityEngine::UIElements::TransformData  rhs) ;

/// @brief Method Equals addr 0x2e84510 size 0x44 virtual true final true
inline bool Equals(::UnityEngine::UIElements::TransformData  other) ;

/// @brief Method Equals addr 0x2e84554 size 0xa0 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e845f4 size 0x64 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "rotate", ty: "::UnityEngine::UIElements::Rotate", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::UnityEngine::UIElements::Scale", modifiers: "", def_value: None }, CppParam { name: "transformOrigin", ty: "::UnityEngine::UIElements::TransformOrigin", modifiers: "", def_value: None }, CppParam { name: "translate", ty: "::UnityEngine::UIElements::Translate", modifiers: "", def_value: None }]
constexpr TransformData(::UnityEngine::UIElements::Rotate  rotate, ::UnityEngine::UIElements::Scale  scale, ::UnityEngine::UIElements::TransformOrigin  transformOrigin, ::UnityEngine::UIElements::Translate  translate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TransformData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x54>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TransformData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransformData, 0x54>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransformData, "UnityEngine.UIElements", "TransformData");
