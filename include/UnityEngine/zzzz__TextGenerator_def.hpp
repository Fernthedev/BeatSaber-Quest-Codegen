#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerator)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct UILineInfo;
}
namespace UnityEngine {
struct TextGenerationSettings;
}
namespace UnityEngine {
struct UIVertex;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct VerticalWrapMode;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct TextGenerationError;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct UICharInfo;
}
namespace UnityEngine {
struct FontStyle;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct HorizontalWrapMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class TextGenerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextGenerator);
// Type: UnityEngine::TextGenerator
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15899))
// CS Name: ::UnityEngine::TextGenerator*
class CORDL_TYPE TextGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

/// @brief Field m_LastString offset 0x18
 __declspec(property(get=__get_m_LastString, put=__set_m_LastString)) ::StringW  m_LastString;

/// @brief Field m_LastSettings offset 0x20
 __declspec(property(get=__get_m_LastSettings, put=__set_m_LastSettings)) ::UnityEngine::TextGenerationSettings  m_LastSettings;

/// @brief Field m_HasGenerated offset 0x80
 __declspec(property(get=__get_m_HasGenerated, put=__set_m_HasGenerated)) bool  m_HasGenerated;

/// @brief Field m_LastValid offset 0x84
 __declspec(property(get=__get_m_LastValid, put=__set_m_LastValid)) ::UnityEngine::TextGenerationError  m_LastValid;

/// @brief Field m_Verts offset 0x88
 __declspec(property(get=__get_m_Verts, put=__set_m_Verts)) ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  m_Verts;

/// @brief Field m_Characters offset 0x90
 __declspec(property(get=__get_m_Characters, put=__set_m_Characters)) ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*  m_Characters;

/// @brief Field m_Lines offset 0x98
 __declspec(property(get=__get_m_Lines, put=__set_m_Lines)) ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*  m_Lines;

/// @brief Field m_CachedVerts offset 0xa0
 __declspec(property(get=__get_m_CachedVerts, put=__set_m_CachedVerts)) bool  m_CachedVerts;

/// @brief Field m_CachedCharacters offset 0xa1
 __declspec(property(get=__get_m_CachedCharacters, put=__set_m_CachedCharacters)) bool  m_CachedCharacters;

/// @brief Field m_CachedLines offset 0xa2
 __declspec(property(get=__get_m_CachedLines, put=__set_m_CachedLines)) bool  m_CachedLines;

 __declspec(property(get=get_characterCountVisible)) int32_t  characterCountVisible;

 __declspec(property(get=get_verts)) ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*  verts;

 __declspec(property(get=get_characters)) ::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>*  characters;

 __declspec(property(get=get_lines)) ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>*  lines;

 __declspec(property(get=get_rectExtents)) ::UnityEngine::Rect  rectExtents;

 __declspec(property(get=get_characterCount)) int32_t  characterCount;

 __declspec(property(get=get_lineCount)) int32_t  lineCount;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

constexpr void __set_m_LastString(::StringW  value) ;

constexpr ::StringW& __get_m_LastString() ;

constexpr ::StringW const& __get_m_LastString() const;

constexpr void __set_m_LastSettings(::UnityEngine::TextGenerationSettings  value) ;

constexpr ::UnityEngine::TextGenerationSettings& __get_m_LastSettings() ;

constexpr ::UnityEngine::TextGenerationSettings const& __get_m_LastSettings() const;

constexpr void __set_m_HasGenerated(bool  value) ;

constexpr bool& __get_m_HasGenerated() ;

constexpr bool const& __get_m_HasGenerated() const;

constexpr void __set_m_LastValid(::UnityEngine::TextGenerationError  value) ;

constexpr ::UnityEngine::TextGenerationError& __get_m_LastValid() ;

constexpr ::UnityEngine::TextGenerationError const& __get_m_LastValid() const;

constexpr void __set_m_Verts(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* __get_m_Verts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*> __get_m_Verts() const;

constexpr void __set_m_Characters(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* __get_m_Characters() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*> __get_m_Characters() const;

constexpr void __set_m_Lines(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* __get_m_Lines() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*> __get_m_Lines() const;

constexpr void __set_m_CachedVerts(bool  value) ;

constexpr bool& __get_m_CachedVerts() ;

constexpr bool const& __get_m_CachedVerts() const;

constexpr void __set_m_CachedCharacters(bool  value) ;

constexpr bool& __get_m_CachedCharacters() ;

constexpr bool const& __get_m_CachedCharacters() const;

constexpr void __set_m_CachedLines(bool  value) ;

constexpr bool& __get_m_CachedLines() ;

constexpr bool const& __get_m_CachedLines() const;

static inline ::UnityEngine::TextGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x2d4ded8 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::TextGenerator* New_ctor(int32_t  initialCapacity) ;

/// @brief Method .ctor addr 0x2d4dee0 size 0x14c virtual false final false
inline void _ctor(int32_t  initialCapacity) ;

/// @brief Method Finalize addr 0x2d4e054 size 0x110 virtual true final false
inline void Finalize() ;

/// @brief Method System.IDisposable.Dispose addr 0x2d4e164 size 0xa0 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method get_characterCountVisible addr 0x2d4e240 size 0x44 virtual false final false
inline int32_t get_characterCountVisible() ;

/// @brief Method ValidatedSettings addr 0x2d4e2c0 size 0x2b8 virtual false final false
inline ::UnityEngine::TextGenerationSettings ValidatedSettings(::UnityEngine::TextGenerationSettings  settings) ;

/// @brief Method Invalidate addr 0x2d4e5b4 size 0x8 virtual false final false
inline void Invalidate() ;

/// @brief Method GetCharacters addr 0x2d4e5bc size 0x44 virtual false final false
inline void GetCharacters(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*  characters) ;

/// @brief Method GetLines addr 0x2d4e644 size 0x44 virtual false final false
inline void GetLines(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*  lines) ;

/// @brief Method GetVertices addr 0x2d4e6cc size 0x44 virtual false final false
inline void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*  vertices) ;

/// @brief Method GetPreferredWidth addr 0x2d4e754 size 0x74 virtual false final false
inline float_t GetPreferredWidth(::StringW  str, ::UnityEngine::TextGenerationSettings  settings) ;

/// @brief Method GetPreferredHeight addr 0x2d4e870 size 0x70 virtual false final false
inline float_t GetPreferredHeight(::StringW  str, ::UnityEngine::TextGenerationSettings  settings) ;

/// @brief Method PopulateWithErrors addr 0x2d4e8e0 size 0x1b0 virtual false final false
inline bool PopulateWithErrors(::StringW  str, ::UnityEngine::TextGenerationSettings  settings, ::UnityEngine::GameObject*  context) ;

/// @brief Method Populate addr 0x2d4e7c8 size 0x50 virtual false final false
inline bool Populate(::StringW  str, ::UnityEngine::TextGenerationSettings  settings) ;

/// @brief Method PopulateWithError addr 0x2d4ea90 size 0x90 virtual false final false
inline ::UnityEngine::TextGenerationError PopulateWithError(::StringW  str, ::UnityEngine::TextGenerationSettings  settings) ;

/// @brief Method PopulateAlways addr 0x2d4eb20 size 0x108 virtual false final false
inline ::UnityEngine::TextGenerationError PopulateAlways(::StringW  str, ::UnityEngine::TextGenerationSettings  settings) ;

/// @brief Method get_verts addr 0x2d4edd4 size 0x5c virtual false final false
inline ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* get_verts() ;

/// @brief Method get_characters addr 0x2d4ee30 size 0x5c virtual false final false
inline ::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* get_characters() ;

/// @brief Method get_lines addr 0x2d4ee8c size 0x5c virtual false final false
inline ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* get_lines() ;

/// @brief Method get_rectExtents addr 0x2d4e818 size 0x58 virtual false final false
inline ::UnityEngine::Rect get_rectExtents() ;

/// @brief Method get_characterCount addr 0x2d4e284 size 0x3c virtual false final false
inline int32_t get_characterCount() ;

/// @brief Method get_lineCount addr 0x2d4ef2c size 0x3c virtual false final false
inline int32_t get_lineCount() ;

/// @brief Method Internal_Create addr 0x2d4e02c size 0x28 virtual false final false
static inline ::cordl_internals::intptr_t Internal_Create() ;

/// @brief Method Internal_Destroy addr 0x2d4e204 size 0x3c virtual false final false
static inline void Internal_Destroy(::cordl_internals::intptr_t  ptr) ;

/// @brief Method Populate_Internal addr 0x2d4ef68 size 0x14c virtual false final false
inline bool Populate_Internal(::StringW  str, ::UnityEngine::Font*  font, ::UnityEngine::Color  color, int32_t  fontSize, float_t  scaleFactor, float_t  lineSpacing, ::UnityEngine::FontStyle  style, bool  richText, bool  resizeTextForBestFit, int32_t  resizeTextMinSize, int32_t  resizeTextMaxSize, int32_t  verticalOverFlow, int32_t  horizontalOverflow, bool  updateBounds, ::UnityEngine::TextAnchor  anchor, float_t  extentsX, float_t  extentsY, float_t  pivotX, float_t  pivotY, bool  generateOutOfBounds, bool  alignByGeometry, ByRef<uint32_t>  error) ;

/// @brief Method Populate_Internal addr 0x2d4ec28 size 0x1ac virtual false final false
inline bool Populate_Internal(::StringW  str, ::UnityEngine::Font*  font, ::UnityEngine::Color  color, int32_t  fontSize, float_t  scaleFactor, float_t  lineSpacing, ::UnityEngine::FontStyle  style, bool  richText, bool  resizeTextForBestFit, int32_t  resizeTextMinSize, int32_t  resizeTextMaxSize, ::UnityEngine::VerticalWrapMode  verticalOverFlow, ::UnityEngine::HorizontalWrapMode  horizontalOverflow, bool  updateBounds, ::UnityEngine::TextAnchor  anchor, ::UnityEngine::Vector2  extents, ::UnityEngine::Vector2  pivot, bool  generateOutOfBounds, bool  alignByGeometry, ByRef<::UnityEngine::TextGenerationError>  error) ;

/// @brief Method GetVerticesInternal addr 0x2d4e710 size 0x44 virtual false final false
inline void GetVerticesInternal(::System::Object*  vertices) ;

/// @brief Method GetCharactersInternal addr 0x2d4e600 size 0x44 virtual false final false
inline void GetCharactersInternal(::System::Object*  characters) ;

/// @brief Method GetLinesInternal addr 0x2d4e688 size 0x44 virtual false final false
inline void GetLinesInternal(::System::Object*  lines) ;

/// @brief Method get_rectExtents_Injected addr 0x2d4eee8 size 0x44 virtual false final false
inline void get_rectExtents_Injected(ByRef<::UnityEngine::Rect>  ret) ;

/// @brief Method Populate_Internal_Injected addr 0x2d4f0b4 size 0x130 virtual false final false
inline bool Populate_Internal_Injected(::StringW  str, ::UnityEngine::Font*  font, ByRef<::UnityEngine::Color>  color, int32_t  fontSize, float_t  scaleFactor, float_t  lineSpacing, ::UnityEngine::FontStyle  style, bool  richText, bool  resizeTextForBestFit, int32_t  resizeTextMinSize, int32_t  resizeTextMaxSize, int32_t  verticalOverFlow, int32_t  horizontalOverflow, bool  updateBounds, ::UnityEngine::TextAnchor  anchor, float_t  extentsX, float_t  extentsY, float_t  pivotX, float_t  pivotY, bool  generateOutOfBounds, bool  alignByGeometry, ByRef<uint32_t>  error) ;

// Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextGenerator(TextGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextGenerator(TextGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextGenerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextGenerator, 0xa8>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::TextGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextGenerator*, "UnityEngine", "TextGenerator");
