#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTargetIdentifier)
namespace UnityEngine {
class Texture;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct BuiltinRenderTextureType;
}
namespace UnityEngine {
struct CubemapFace;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderTargetIdentifier);
// Type: UnityEngine.Rendering::RenderTargetIdentifier
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10346))
// CS Name: ::UnityEngine.Rendering::RenderTargetIdentifier
struct CORDL_TYPE RenderTargetIdentifier : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_Type offset 0x0
 __declspec(property(get=__get_m_Type, put=__set_m_Type)) ::UnityEngine::Rendering::BuiltinRenderTextureType  m_Type;

/// @brief Field m_NameID offset 0x4
 __declspec(property(get=__get_m_NameID, put=__set_m_NameID)) int32_t  m_NameID;

/// @brief Field m_InstanceID offset 0x8
 __declspec(property(get=__get_m_InstanceID, put=__set_m_InstanceID)) int32_t  m_InstanceID;

/// @brief Field m_BufferPointer offset 0x10
 __declspec(property(get=__get_m_BufferPointer, put=__set_m_BufferPointer)) ::cordl_internals::intptr_t  m_BufferPointer;

/// @brief Field m_MipLevel offset 0x18
 __declspec(property(get=__get_m_MipLevel, put=__set_m_MipLevel)) int32_t  m_MipLevel;

/// @brief Field m_CubeFace offset 0x1c
 __declspec(property(get=__get_m_CubeFace, put=__set_m_CubeFace)) ::UnityEngine::CubemapFace  m_CubeFace;

/// @brief Field m_DepthSlice offset 0x20
 __declspec(property(get=__get_m_DepthSlice, put=__set_m_DepthSlice)) int32_t  m_DepthSlice;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetIdentifier>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetIdentifier>*() ;

constexpr void __set_m_Type(::UnityEngine::Rendering::BuiltinRenderTextureType  value) ;

constexpr ::UnityEngine::Rendering::BuiltinRenderTextureType& __get_m_Type() ;

constexpr ::UnityEngine::Rendering::BuiltinRenderTextureType const& __get_m_Type() const;

constexpr void __set_m_NameID(int32_t  value) ;

constexpr int32_t& __get_m_NameID() ;

constexpr int32_t const& __get_m_NameID() const;

constexpr void __set_m_InstanceID(int32_t  value) ;

constexpr int32_t& __get_m_InstanceID() ;

constexpr int32_t const& __get_m_InstanceID() const;

constexpr void __set_m_BufferPointer(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_BufferPointer() ;

constexpr ::cordl_internals::intptr_t const& __get_m_BufferPointer() const;

constexpr void __set_m_MipLevel(int32_t  value) ;

constexpr int32_t& __get_m_MipLevel() ;

constexpr int32_t const& __get_m_MipLevel() const;

constexpr void __set_m_CubeFace(::UnityEngine::CubemapFace  value) ;

constexpr ::UnityEngine::CubemapFace& __get_m_CubeFace() ;

constexpr ::UnityEngine::CubemapFace const& __get_m_CubeFace() const;

constexpr void __set_m_DepthSlice(int32_t  value) ;

constexpr int32_t& __get_m_DepthSlice() ;

constexpr int32_t const& __get_m_DepthSlice() const;

/// @brief Method .ctor addr 0x2cec308 size 0x74 virtual false final false
inline void _ctor(::UnityEngine::Rendering::BuiltinRenderTextureType  type) ;

/// @brief Method .ctor addr 0x2cec37c size 0x74 virtual false final false
inline void _ctor(int32_t  nameID) ;

/// @brief Method .ctor addr 0x2cec3f0 size 0x144 virtual false final false
inline void _ctor(::UnityEngine::Texture*  tex) ;

/// @brief Method op_Implicit addr 0x2cec534 size 0x78 virtual false final false
static inline ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(::UnityEngine::Rendering::BuiltinRenderTextureType  type) ;

/// @brief Method op_Implicit addr 0x2cec5ac size 0x70 virtual false final false
static inline ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(int32_t  nameID) ;

/// @brief Method op_Implicit addr 0x2cec61c size 0x50 virtual false final false
static inline ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(::UnityEngine::Texture*  tex) ;

/// @brief Method ToString addr 0x2cec66c size 0x2a8 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2cec914 size 0x4c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2cec960 size 0x98 virtual true final true
inline bool Equals(::UnityEngine::Rendering::RenderTargetIdentifier  rhs) ;

/// @brief Method Equals addr 0x2cec9f8 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::Rendering::BuiltinRenderTextureType", modifiers: "", def_value: None }, CppParam { name: "m_NameID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BufferPointer", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_MipLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CubeFace", ty: "::UnityEngine::CubemapFace", modifiers: "", def_value: None }, CppParam { name: "m_DepthSlice", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderTargetIdentifier(::UnityEngine::Rendering::BuiltinRenderTextureType  m_Type, int32_t  m_NameID, int32_t  m_InstanceID, ::cordl_internals::intptr_t  m_BufferPointer, int32_t  m_MipLevel, ::UnityEngine::CubemapFace  m_CubeFace, int32_t  m_DepthSlice) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderTargetIdentifier(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderTargetIdentifier()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderTargetIdentifier, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderTargetIdentifier, "UnityEngine.Rendering", "RenderTargetIdentifier");
