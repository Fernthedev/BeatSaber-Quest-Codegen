#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__BaseShaderInfoStorage_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderInfoStorage_1)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::UIElements {
class UIRAtlasAllocator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class ShaderInfoStorage_1;
}
namespace UnityEngine::UIElements::UIR {
template<>
class ShaderInfoStorage_1<::UnityEngine::Color>;
}
namespace UnityEngine::UIElements::UIR {
template<>
class ShaderInfoStorage_1<::UnityEngine::Color32>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::ShaderInfoStorage_1);
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorage`1
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorage`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7381)), TypeDefinitionIndex(TypeDefinitionIndex(7380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7381), inst: 742 })
// CS Name: ::UnityEngine.UIElements.UIR::ShaderInfoStorage`1<T>*
class CORDL_TYPE ShaderInfoStorage_1<::UnityEngine::Color32> : public ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage)]{};

/// @brief Field m_InitialSize offset 0x14
 __declspec(property(get=__get_m_InitialSize, put=__set_m_InitialSize)) int32_t  m_InitialSize;

/// @brief Field m_MaxSize offset 0x18
 __declspec(property(get=__get_m_MaxSize, put=__set_m_MaxSize)) int32_t  m_MaxSize;

/// @brief Field m_Format offset 0x1c
 __declspec(property(get=__get_m_Format, put=__set_m_Format)) ::UnityEngine::TextureFormat  m_Format;

/// @brief Field m_Convert offset 0x20
 __declspec(property(get=__get_m_Convert, put=__set_m_Convert)) ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color32>*  m_Convert;

/// @brief Field m_Allocator offset 0x28
 __declspec(property(get=__get_m_Allocator, put=__set_m_Allocator)) ::UnityEngine::UIElements::UIRAtlasAllocator*  m_Allocator;

/// @brief Field m_Texture offset 0x30
 __declspec(property(get=__get_m_Texture, put=__set_m_Texture)) ::UnityEngine::Texture2D*  m_Texture;

/// @brief Field m_Texels offset 0x38
 __declspec(property(get=__get_m_Texels, put=__set_m_Texels)) ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  m_Texels;

 __declspec(property(get=get_texture)) ::UnityEngine::Texture2D*  texture;

constexpr void __set_m_InitialSize(int32_t  value) ;

constexpr int32_t& __get_m_InitialSize() ;

constexpr int32_t const& __get_m_InitialSize() const;

constexpr void __set_m_MaxSize(int32_t  value) ;

constexpr int32_t& __get_m_MaxSize() ;

constexpr int32_t const& __get_m_MaxSize() const;

constexpr void __set_m_Format(::UnityEngine::TextureFormat  value) ;

constexpr ::UnityEngine::TextureFormat& __get_m_Format() ;

constexpr ::UnityEngine::TextureFormat const& __get_m_Format() const;

constexpr void __set_m_Convert(::System::Func_2<::UnityEngine::Color,::UnityEngine::Color32>*  value) ;

constexpr ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color32>* __get_m_Convert() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::Color,::UnityEngine::Color32>*> __get_m_Convert() const;

constexpr void __set_m_Allocator(::UnityEngine::UIElements::UIRAtlasAllocator*  value) ;

constexpr ::UnityEngine::UIElements::UIRAtlasAllocator* __get_m_Allocator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIRAtlasAllocator*> __get_m_Allocator() const;

constexpr void __set_m_Texture(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get_m_Texture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get_m_Texture() const;

constexpr void __set_m_Texels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>& __get_m_Texels() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color32> const& __get_m_Texels() const;

static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<::UnityEngine::Color32>* New_ctor(::UnityEngine::TextureFormat  format, ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color32>*  convert, int32_t  initialSize, int32_t  maxSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::TextureFormat  format, ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color32>*  convert, int32_t  initialSize, int32_t  maxSize) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method get_texture addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Texture2D* get_texture() ;

/// @brief Method AllocateRect addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AllocateRect(int32_t  width, int32_t  height, ByRef<::UnityEngine::RectInt>  uvs) ;

/// @brief Method SetTexel addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetTexel(int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method UpdateTexture addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateTexture() ;

/// @brief Method CreateOrExpandTexture addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CreateOrExpandTexture() ;

/// @brief Method CpuBlit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void CpuBlit(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  src, int32_t  srcWidth, int32_t  srcHeight, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  dst, int32_t  dstWidth, int32_t  dstHeight) ;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorage_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderInfoStorage_1(ShaderInfoStorage_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorage_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderInfoStorage_1(ShaderInfoStorage_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ShaderInfoStorage_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorage`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7380)), TypeDefinitionIndex(TypeDefinitionIndex(7381))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7381), inst: 293 })
// CS Name: ::UnityEngine.UIElements.UIR::ShaderInfoStorage`1<T>*
class CORDL_TYPE ShaderInfoStorage_1<::UnityEngine::Color> : public ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage)]{};

/// @brief Field m_InitialSize offset 0x14
 __declspec(property(get=__get_m_InitialSize, put=__set_m_InitialSize)) int32_t  m_InitialSize;

/// @brief Field m_MaxSize offset 0x18
 __declspec(property(get=__get_m_MaxSize, put=__set_m_MaxSize)) int32_t  m_MaxSize;

/// @brief Field m_Format offset 0x1c
 __declspec(property(get=__get_m_Format, put=__set_m_Format)) ::UnityEngine::TextureFormat  m_Format;

/// @brief Field m_Convert offset 0x20
 __declspec(property(get=__get_m_Convert, put=__set_m_Convert)) ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color>*  m_Convert;

/// @brief Field m_Allocator offset 0x28
 __declspec(property(get=__get_m_Allocator, put=__set_m_Allocator)) ::UnityEngine::UIElements::UIRAtlasAllocator*  m_Allocator;

/// @brief Field m_Texture offset 0x30
 __declspec(property(get=__get_m_Texture, put=__set_m_Texture)) ::UnityEngine::Texture2D*  m_Texture;

/// @brief Field m_Texels offset 0x38
 __declspec(property(get=__get_m_Texels, put=__set_m_Texels)) ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  m_Texels;

 __declspec(property(get=get_texture)) ::UnityEngine::Texture2D*  texture;

constexpr void __set_m_InitialSize(int32_t  value) ;

constexpr int32_t& __get_m_InitialSize() ;

constexpr int32_t const& __get_m_InitialSize() const;

constexpr void __set_m_MaxSize(int32_t  value) ;

constexpr int32_t& __get_m_MaxSize() ;

constexpr int32_t const& __get_m_MaxSize() const;

constexpr void __set_m_Format(::UnityEngine::TextureFormat  value) ;

constexpr ::UnityEngine::TextureFormat& __get_m_Format() ;

constexpr ::UnityEngine::TextureFormat const& __get_m_Format() const;

constexpr void __set_m_Convert(::System::Func_2<::UnityEngine::Color,::UnityEngine::Color>*  value) ;

constexpr ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color>* __get_m_Convert() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::Color,::UnityEngine::Color>*> __get_m_Convert() const;

constexpr void __set_m_Allocator(::UnityEngine::UIElements::UIRAtlasAllocator*  value) ;

constexpr ::UnityEngine::UIElements::UIRAtlasAllocator* __get_m_Allocator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIRAtlasAllocator*> __get_m_Allocator() const;

constexpr void __set_m_Texture(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get_m_Texture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get_m_Texture() const;

constexpr void __set_m_Texels(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color>& __get_m_Texels() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color> const& __get_m_Texels() const;

static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<::UnityEngine::Color>* New_ctor(::UnityEngine::TextureFormat  format, ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color>*  convert, int32_t  initialSize, int32_t  maxSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::TextureFormat  format, ::System::Func_2<::UnityEngine::Color,::UnityEngine::Color>*  convert, int32_t  initialSize, int32_t  maxSize) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method get_texture addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Texture2D* get_texture() ;

/// @brief Method AllocateRect addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AllocateRect(int32_t  width, int32_t  height, ByRef<::UnityEngine::RectInt>  uvs) ;

/// @brief Method SetTexel addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetTexel(int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method UpdateTexture addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateTexture() ;

/// @brief Method CreateOrExpandTexture addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CreateOrExpandTexture() ;

/// @brief Method CpuBlit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void CpuBlit(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  src, int32_t  srcWidth, int32_t  srcHeight, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  dst, int32_t  dstWidth, int32_t  dstHeight) ;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorage_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderInfoStorage_1(ShaderInfoStorage_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorage_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderInfoStorage_1(ShaderInfoStorage_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ShaderInfoStorage_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::ShaderInfoStorage_1, "UnityEngine.UIElements.UIR", "ShaderInfoStorage`1");
