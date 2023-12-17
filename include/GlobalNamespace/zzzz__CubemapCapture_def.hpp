#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CubemapCapture)
namespace UnityEngine {
struct __Texture2D__EXRFlags;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __CubemapCapture__ImageType;
}
namespace UnityEngine::InputSystem {
struct Key;
}
// Forward declare root types
namespace GlobalNamespace {
struct __CubemapCapture__ImageType;
}
namespace GlobalNamespace {
class CubemapCapture;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__CubemapCapture__ImageType);
MARK_REF_PTR_T(::GlobalNamespace::CubemapCapture);
// Type: ::ImageType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5829))
// CS Name: ::CubemapCapture::ImageType
struct CORDL_TYPE __CubemapCapture__ImageType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____CubemapCapture__ImageType_Unwrapped
enum struct ____CubemapCapture__ImageType_Unwrapped : int32_t {
__E_PNG = static_cast<int32_t>(0x0),
__E_JPEG = static_cast<int32_t>(0x1),
__E_TGA = static_cast<int32_t>(0x2),
__E_EXR = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field PNG value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__CubemapCapture__ImageType const PNG;

/// @brief Field JPEG value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__CubemapCapture__ImageType const JPEG;

/// @brief Field TGA value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__CubemapCapture__ImageType const TGA;

/// @brief Field EXR value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__CubemapCapture__ImageType const EXR;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____CubemapCapture__ImageType_Unwrapped () const noexcept {
return std::bit_cast<____CubemapCapture__ImageType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __CubemapCapture__ImageType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CubemapCapture__ImageType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CubemapCapture__ImageType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CubemapCapture__ImageType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CubemapCapture
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5830))
// CS Name: ::CubemapCapture*
class CORDL_TYPE CubemapCapture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ImageType = ::GlobalNamespace::__CubemapCapture__ImageType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _camera offset 0x18
 __declspec(property(get=__get__camera, put=__set__camera)) ::UnityEngine::Camera*  _camera;

/// @brief Field _triggerKey offset 0x20
 __declspec(property(get=__get__triggerKey, put=__set__triggerKey)) ::UnityEngine::InputSystem::Key  _triggerKey;

/// @brief Field _cubemapSize offset 0x24
 __declspec(property(get=__get__cubemapSize, put=__set__cubemapSize)) int32_t  _cubemapSize;

/// @brief Field _saveDirectoryAbsolutePath offset 0x28
 __declspec(property(get=__get__saveDirectoryAbsolutePath, put=__set__saveDirectoryAbsolutePath)) ::StringW  _saveDirectoryAbsolutePath;

/// @brief Field _imageType offset 0x30
 __declspec(property(get=__get__imageType, put=__set__imageType)) ::GlobalNamespace::__CubemapCapture__ImageType  _imageType;

/// @brief Field _jpegCompression offset 0x34
 __declspec(property(get=__get__jpegCompression, put=__set__jpegCompression)) int32_t  _jpegCompression;

/// @brief Field _exrFlags offset 0x38
 __declspec(property(get=__get__exrFlags, put=__set__exrFlags)) ::UnityEngine::__Texture2D__EXRFlags  _exrFlags;

/// @brief Field _faces offset 0x40
 __declspec(property(get=__get__faces, put=__set__faces)) ::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*>  _faces;

/// @brief Field _faceAngles offset 0x48
 __declspec(property(get=__get__faceAngles, put=__set__faceAngles)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _faceAngles;

constexpr void __set__camera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__camera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__camera() const;

constexpr void __set__triggerKey(::UnityEngine::InputSystem::Key  value) ;

constexpr ::UnityEngine::InputSystem::Key& __get__triggerKey() ;

constexpr ::UnityEngine::InputSystem::Key const& __get__triggerKey() const;

constexpr void __set__cubemapSize(int32_t  value) ;

constexpr int32_t& __get__cubemapSize() ;

constexpr int32_t const& __get__cubemapSize() const;

constexpr void __set__saveDirectoryAbsolutePath(::StringW  value) ;

constexpr ::StringW& __get__saveDirectoryAbsolutePath() ;

constexpr ::StringW const& __get__saveDirectoryAbsolutePath() const;

constexpr void __set__imageType(::GlobalNamespace::__CubemapCapture__ImageType  value) ;

constexpr ::GlobalNamespace::__CubemapCapture__ImageType& __get__imageType() ;

constexpr ::GlobalNamespace::__CubemapCapture__ImageType const& __get__imageType() const;

constexpr void __set__jpegCompression(int32_t  value) ;

constexpr int32_t& __get__jpegCompression() ;

constexpr int32_t const& __get__jpegCompression() const;

constexpr void __set__exrFlags(::UnityEngine::__Texture2D__EXRFlags  value) ;

constexpr ::UnityEngine::__Texture2D__EXRFlags& __get__exrFlags() ;

constexpr ::UnityEngine::__Texture2D__EXRFlags const& __get__exrFlags() const;

constexpr void __set__faces(::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*>  value) ;

constexpr ::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*>& __get__faces() ;

constexpr ::ArrayW<::UnityEngine::CubemapFace,::Array<::UnityEngine::CubemapFace>*> const& __get__faces() const;

constexpr void __set__faceAngles(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get__faceAngles() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get__faceAngles() const;

/// @brief Method Update addr 0x22ec768 size 0x80 virtual false final false
inline void Update() ;

/// @brief Method GenerateAndSaveCubemapTexture addr 0x22ec7e8 size 0xbc virtual false final false
inline void GenerateAndSaveCubemapTexture() ;

/// @brief Method RenderCubemapTexture addr 0x22ec8a4 size 0x4d4 virtual false final false
inline void RenderCubemapTexture(::UnityEngine::Cubemap*  cubemap) ;

/// @brief Method SaveCubemapTexture addr 0x22ecd78 size 0x7d0 virtual false final false
inline void SaveCubemapTexture(::UnityEngine::Cubemap*  cubemap, ::StringW  path) ;

/// @brief Method SerializeTextureToByteArray addr 0x22ed548 size 0xf4 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> SerializeTextureToByteArray(::UnityEngine::Texture2D*  texture) ;

static inline ::GlobalNamespace::CubemapCapture* New_ctor() ;

/// @brief Method .ctor addr 0x22ed63c size 0x150 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CubemapCapture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CubemapCapture(CubemapCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CubemapCapture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CubemapCapture(CubemapCapture const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CubemapCapture()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CubemapCapture, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CubemapCapture__ImageType, "", "CubemapCapture/ImageType");
NEED_NO_BOX(::GlobalNamespace::CubemapCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubemapCapture*, "", "CubemapCapture");
