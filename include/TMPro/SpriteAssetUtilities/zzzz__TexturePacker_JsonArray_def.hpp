#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TexturePacker_JsonArray)
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__SpriteSize;
}
namespace TMPro::SpriteAssetUtilities {
class __TexturePacker_JsonArray__SpriteDataObject;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__Meta;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__Frame;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__SpriteFrame;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace TMPro::SpriteAssetUtilities {
class TexturePacker_JsonArray;
}
namespace TMPro::SpriteAssetUtilities {
class __TexturePacker_JsonArray__SpriteDataObject;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__Frame;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__Meta;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__SpriteFrame;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__SpriteSize;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray);
MARK_REF_PTR_T(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize);
// Type: ::SpriteFrame
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12461))
// CS Name: ::TexturePacker_JsonArray::SpriteFrame
struct CORDL_TYPE __TexturePacker_JsonArray__SpriteFrame : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field x offset 0x0
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x4
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field w offset 0x8
 __declspec(property(get=__get_w, put=__set_w)) float_t  w;

/// @brief Field h offset 0xc
 __declspec(property(get=__get_h, put=__set_h)) float_t  h;

constexpr void __set_x(float_t  value) ;

constexpr float_t& __get_x() ;

constexpr float_t const& __get_x() const;

constexpr void __set_y(float_t  value) ;

constexpr float_t& __get_y() ;

constexpr float_t const& __get_y() const;

constexpr void __set_w(float_t  value) ;

constexpr float_t& __get_w() ;

constexpr float_t const& __get_w() const;

constexpr void __set_h(float_t  value) ;

constexpr float_t& __get_h() ;

constexpr float_t const& __get_h() const;

/// @brief Method ToString addr 0x2c4e64c size 0x278 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }]
constexpr __TexturePacker_JsonArray__SpriteFrame(float_t  x, float_t  y, float_t  w, float_t  h) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TexturePacker_JsonArray__SpriteFrame(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TexturePacker_JsonArray__SpriteFrame()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame, 0x10>, "Size mismatch!");

} // namespace end def TMPro::SpriteAssetUtilities
// Type: ::SpriteSize
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12462))
// CS Name: ::TexturePacker_JsonArray::SpriteSize
struct CORDL_TYPE __TexturePacker_JsonArray__SpriteSize : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field w offset 0x0
 __declspec(property(get=__get_w, put=__set_w)) float_t  w;

/// @brief Field h offset 0x4
 __declspec(property(get=__get_h, put=__set_h)) float_t  h;

constexpr void __set_w(float_t  value) ;

constexpr float_t& __get_w() ;

constexpr float_t const& __get_w() const;

constexpr void __set_h(float_t  value) ;

constexpr float_t& __get_h() ;

constexpr float_t const& __get_h() const;

/// @brief Method ToString addr 0x2c4e8c4 size 0xac virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }]
constexpr __TexturePacker_JsonArray__SpriteSize(float_t  w, float_t  h) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TexturePacker_JsonArray__SpriteSize(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TexturePacker_JsonArray__SpriteSize()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize, 0x8>, "Size mismatch!");

} // namespace end def TMPro::SpriteAssetUtilities
// Type: ::Frame
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12463))
// CS Name: ::TexturePacker_JsonArray::Frame
struct CORDL_TYPE __TexturePacker_JsonArray__Frame : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field filename offset 0x0
 __declspec(property(get=__get_filename, put=__set_filename)) ::StringW  filename;

/// @brief Field frame offset 0x8
 __declspec(property(get=__get_frame, put=__set_frame)) ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame  frame;

/// @brief Field rotated offset 0x18
 __declspec(property(get=__get_rotated, put=__set_rotated)) bool  rotated;

/// @brief Field trimmed offset 0x19
 __declspec(property(get=__get_trimmed, put=__set_trimmed)) bool  trimmed;

/// @brief Field spriteSourceSize offset 0x1c
 __declspec(property(get=__get_spriteSourceSize, put=__set_spriteSourceSize)) ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame  spriteSourceSize;

/// @brief Field sourceSize offset 0x2c
 __declspec(property(get=__get_sourceSize, put=__set_sourceSize)) ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize  sourceSize;

/// @brief Field pivot offset 0x34
 __declspec(property(get=__get_pivot, put=__set_pivot)) ::UnityEngine::Vector2  pivot;

constexpr void __set_filename(::StringW  value) ;

constexpr ::StringW& __get_filename() ;

constexpr ::StringW const& __get_filename() const;

constexpr void __set_frame(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame  value) ;

constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame& __get_frame() ;

constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame const& __get_frame() const;

constexpr void __set_rotated(bool  value) ;

constexpr bool& __get_rotated() ;

constexpr bool const& __get_rotated() const;

constexpr void __set_trimmed(bool  value) ;

constexpr bool& __get_trimmed() ;

constexpr bool const& __get_trimmed() const;

constexpr void __set_spriteSourceSize(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame  value) ;

constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame& __get_spriteSourceSize() ;

constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame const& __get_spriteSourceSize() const;

constexpr void __set_sourceSize(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize  value) ;

constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize& __get_sourceSize() ;

constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize const& __get_sourceSize() const;

constexpr void __set_pivot(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_pivot() ;

constexpr ::UnityEngine::Vector2 const& __get_pivot() const;

// Ctor Parameters [CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "frame", ty: "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame", modifiers: "", def_value: None }, CppParam { name: "rotated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "trimmed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "spriteSourceSize", ty: "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame", modifiers: "", def_value: None }, CppParam { name: "sourceSize", ty: "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize", modifiers: "", def_value: None }, CppParam { name: "pivot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr __TexturePacker_JsonArray__Frame(::StringW  filename, ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame  frame, bool  rotated, bool  trimmed, ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame  spriteSourceSize, ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize  sourceSize, ::UnityEngine::Vector2  pivot) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TexturePacker_JsonArray__Frame(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TexturePacker_JsonArray__Frame()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, 0x40>, "Size mismatch!");

} // namespace end def TMPro::SpriteAssetUtilities
// Type: ::Meta
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12464))
// CS Name: ::TexturePacker_JsonArray::Meta
struct CORDL_TYPE __TexturePacker_JsonArray__Meta : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field app offset 0x0
 __declspec(property(get=__get_app, put=__set_app)) ::StringW  app;

/// @brief Field version offset 0x8
 __declspec(property(get=__get_version, put=__set_version)) ::StringW  version;

/// @brief Field image offset 0x10
 __declspec(property(get=__get_image, put=__set_image)) ::StringW  image;

/// @brief Field format offset 0x18
 __declspec(property(get=__get_format, put=__set_format)) ::StringW  format;

/// @brief Field size offset 0x20
 __declspec(property(get=__get_size, put=__set_size)) ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize  size;

/// @brief Field scale offset 0x28
 __declspec(property(get=__get_scale, put=__set_scale)) float_t  scale;

/// @brief Field smartupdate offset 0x30
 __declspec(property(get=__get_smartupdate, put=__set_smartupdate)) ::StringW  smartupdate;

constexpr void __set_app(::StringW  value) ;

constexpr ::StringW& __get_app() ;

constexpr ::StringW const& __get_app() const;

constexpr void __set_version(::StringW  value) ;

constexpr ::StringW& __get_version() ;

constexpr ::StringW const& __get_version() const;

constexpr void __set_image(::StringW  value) ;

constexpr ::StringW& __get_image() ;

constexpr ::StringW const& __get_image() const;

constexpr void __set_format(::StringW  value) ;

constexpr ::StringW& __get_format() ;

constexpr ::StringW const& __get_format() const;

constexpr void __set_size(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize  value) ;

constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize& __get_size() ;

constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize const& __get_size() const;

constexpr void __set_scale(float_t  value) ;

constexpr float_t& __get_scale() ;

constexpr float_t const& __get_scale() const;

constexpr void __set_smartupdate(::StringW  value) ;

constexpr ::StringW& __get_smartupdate() ;

constexpr ::StringW const& __get_smartupdate() const;

// Ctor Parameters [CppParam { name: "app", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "image", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "size", ty: "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "smartupdate", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __TexturePacker_JsonArray__Meta(::StringW  app, ::StringW  version, ::StringW  image, ::StringW  format, ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize  size, float_t  scale, ::StringW  smartupdate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TexturePacker_JsonArray__Meta(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TexturePacker_JsonArray__Meta()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, 0x38>, "Size mismatch!");

} // namespace end def TMPro::SpriteAssetUtilities
// Type: ::SpriteDataObject
namespace TMPro::SpriteAssetUtilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12465))
// CS Name: ::TexturePacker_JsonArray::SpriteDataObject*
class CORDL_TYPE __TexturePacker_JsonArray__SpriteDataObject : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field frames offset 0x10
 __declspec(property(get=__get_frames, put=__set_frames)) ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>*  frames;

/// @brief Field meta offset 0x18
 __declspec(property(get=__get_meta, put=__set_meta)) ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta  meta;

constexpr void __set_frames(::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>*  value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>* __get_frames() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>*> __get_frames() const;

constexpr void __set_meta(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta  value) ;

constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta& __get_meta() ;

constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta const& __get_meta() const;

static inline ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject* New_ctor() ;

/// @brief Method .ctor addr 0x2c4e970 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TexturePacker_JsonArray__SpriteDataObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TexturePacker_JsonArray__SpriteDataObject(__TexturePacker_JsonArray__SpriteDataObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TexturePacker_JsonArray__SpriteDataObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TexturePacker_JsonArray__SpriteDataObject(__TexturePacker_JsonArray__SpriteDataObject const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TexturePacker_JsonArray__SpriteDataObject()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject, 0x50>, "Size mismatch!");

} // namespace end def TMPro::SpriteAssetUtilities
// Type: TMPro.SpriteAssetUtilities::TexturePacker_JsonArray
namespace TMPro::SpriteAssetUtilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12466))
// CS Name: ::TMPro.SpriteAssetUtilities::TexturePacker_JsonArray*
class CORDL_TYPE TexturePacker_JsonArray : public ::System::Object {
public:
// Declarations
using SpriteDataObject = ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject;

using Meta = ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta;

using Frame = ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame;

using SpriteSize = ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize;

using SpriteFrame = ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray* New_ctor() ;

/// @brief Method .ctor addr 0x2c4e644 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TexturePacker_JsonArray(TexturePacker_JsonArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TexturePacker_JsonArray(TexturePacker_JsonArray const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TexturePacker_JsonArray()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray, 0x10>, "Size mismatch!");

} // namespace end def TMPro::SpriteAssetUtilities
NEED_NO_BOX(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray");
NEED_NO_BOX(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject*, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteDataObject");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Frame");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Meta");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteFrame");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteSize");
