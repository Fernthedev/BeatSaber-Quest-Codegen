#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderContext)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Camera;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ScriptableRenderContext);
// Type: UnityEngine.Rendering::ScriptableRenderContext
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10360))
// CS Name: ::UnityEngine.Rendering::ScriptableRenderContext
struct CORDL_TYPE ScriptableRenderContext : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ptr offset 0x0
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*() ;

static inline void setStaticF_kRenderTypeTag(::UnityEngine::Rendering::ShaderTagId  value) ;

static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_kRenderTypeTag() ;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

/// @brief Method .ctor addr 0x2ced50c size 0x8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  ptr) ;

/// @brief Method GetCameras addr 0x2ced514 size 0x8c virtual false final false
inline void GetCameras(::System::Collections::Generic::List_1<::UnityEngine::Camera*>*  results) ;

/// @brief Method Equals addr 0x2cee308 size 0x70 virtual true final true
inline bool Equals(::UnityEngine::Rendering::ScriptableRenderContext  other) ;

/// @brief Method Equals addr 0x2cee378 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2cee3f0 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method GetCameras_Internal addr 0x2cee27c size 0x8c virtual false final false
inline void GetCameras_Internal(::System::Type*  listType, ::System::Object*  resultList) ;

/// @brief Method GetCameras_Internal_Injected addr 0x2cee3f8 size 0x54 virtual false final false
static inline void GetCameras_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext>  _unity_self, ::System::Type*  listType, ::System::Object*  resultList) ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ScriptableRenderContext(::cordl_internals::intptr_t  m_Ptr) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ScriptableRenderContext(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ScriptableRenderContext()  = default;


// Fields

// Static field kRenderTypeTag


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScriptableRenderContext, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
