#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LODParameters)
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LODParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LODParameters);
// Type: UnityEngine.Rendering::LODParameters
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10355))
// CS Name: ::UnityEngine.Rendering::LODParameters
struct CORDL_TYPE LODParameters : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field m_IsOrthographic offset 0x0
 __declspec(property(get=__get_m_IsOrthographic, put=__set_m_IsOrthographic)) int32_t  m_IsOrthographic;

/// @brief Field m_CameraPosition offset 0x4
 __declspec(property(get=__get_m_CameraPosition, put=__set_m_CameraPosition)) ::UnityEngine::Vector3  m_CameraPosition;

/// @brief Field m_FieldOfView offset 0x10
 __declspec(property(get=__get_m_FieldOfView, put=__set_m_FieldOfView)) float_t  m_FieldOfView;

/// @brief Field m_OrthoSize offset 0x14
 __declspec(property(get=__get_m_OrthoSize, put=__set_m_OrthoSize)) float_t  m_OrthoSize;

/// @brief Field m_CameraPixelHeight offset 0x18
 __declspec(property(get=__get_m_CameraPixelHeight, put=__set_m_CameraPixelHeight)) int32_t  m_CameraPixelHeight;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*() ;

constexpr void __set_m_IsOrthographic(int32_t  value) ;

constexpr int32_t& __get_m_IsOrthographic() ;

constexpr int32_t const& __get_m_IsOrthographic() const;

constexpr void __set_m_CameraPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_CameraPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_m_CameraPosition() const;

constexpr void __set_m_FieldOfView(float_t  value) ;

constexpr float_t& __get_m_FieldOfView() ;

constexpr float_t const& __get_m_FieldOfView() const;

constexpr void __set_m_OrthoSize(float_t  value) ;

constexpr float_t& __get_m_OrthoSize() ;

constexpr float_t const& __get_m_OrthoSize() const;

constexpr void __set_m_CameraPixelHeight(int32_t  value) ;

constexpr int32_t& __get_m_CameraPixelHeight() ;

constexpr int32_t const& __get_m_CameraPixelHeight() const;

/// @brief Method Equals addr 0x2cedac8 size 0x9c virtual true final true
inline bool Equals(::UnityEngine::Rendering::LODParameters  other) ;

/// @brief Method Equals addr 0x2cedb64 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2cedbf4 size 0x94 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_IsOrthographic", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CameraPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_FieldOfView", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OrthoSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CameraPixelHeight", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LODParameters(int32_t  m_IsOrthographic, ::UnityEngine::Vector3  m_CameraPosition, float_t  m_FieldOfView, float_t  m_OrthoSize, int32_t  m_CameraPixelHeight) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LODParameters(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LODParameters()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODParameters, 0x1c>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODParameters, "UnityEngine.Rendering", "LODParameters");
