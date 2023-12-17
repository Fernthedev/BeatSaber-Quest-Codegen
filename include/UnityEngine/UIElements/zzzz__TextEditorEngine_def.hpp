#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextEditorEngine)
namespace UnityEngine::UIElements {
class __TextEditorEngine__OnIndexChangeFunction;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
class __TextEditorEngine__OnDetectFocusChangeFunction;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class __TextEditorEngine__OnDetectFocusChangeFunction;
}
namespace UnityEngine::UIElements {
class __TextEditorEngine__OnIndexChangeFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextEditorEngine);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction);
// Type: ::OnDetectFocusChangeFunction
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7088))
// CS Name: ::TextEditorEngine::OnDetectFocusChangeFunction*
class CORDL_TYPE __TextEditorEngine__OnDetectFocusChangeFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2e33424 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2e334e0 size 0x14 virtual true final false
inline void Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "__TextEditorEngine__OnDetectFocusChangeFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TextEditorEngine__OnDetectFocusChangeFunction(__TextEditorEngine__OnDetectFocusChangeFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TextEditorEngine__OnDetectFocusChangeFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TextEditorEngine__OnDetectFocusChangeFunction(__TextEditorEngine__OnDetectFocusChangeFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TextEditorEngine__OnDetectFocusChangeFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::OnIndexChangeFunction
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7089))
// CS Name: ::TextEditorEngine::OnIndexChangeFunction*
class CORDL_TYPE __TextEditorEngine__OnIndexChangeFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2e334f4 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2e335b0 size 0x14 virtual true final false
inline void Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "__TextEditorEngine__OnIndexChangeFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TextEditorEngine__OnIndexChangeFunction(__TextEditorEngine__OnIndexChangeFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TextEditorEngine__OnIndexChangeFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TextEditorEngine__OnIndexChangeFunction(__TextEditorEngine__OnIndexChangeFunction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TextEditorEngine__OnIndexChangeFunction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextEditorEngine
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14616))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7090))
// CS Name: ::UnityEngine.UIElements::TextEditorEngine*
class CORDL_TYPE TextEditorEngine : public ::UnityEngine::TextEditor {
public:
// Declarations
using OnIndexChangeFunction = ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction;

using OnDetectFocusChangeFunction = ::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::TextEditor)]{};

/// @brief Field m_DetectFocusChangeFunction offset 0x90
 __declspec(property(get=__get_m_DetectFocusChangeFunction, put=__set_m_DetectFocusChangeFunction)) ::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction*  m_DetectFocusChangeFunction;

/// @brief Field m_IndexChangeFunction offset 0x98
 __declspec(property(get=__get_m_IndexChangeFunction, put=__set_m_IndexChangeFunction)) ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction*  m_IndexChangeFunction;

 __declspec(property(get=get_localPosition)) ::UnityEngine::Rect  localPosition;

constexpr void __set_m_DetectFocusChangeFunction(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction*  value) ;

constexpr ::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction* __get_m_DetectFocusChangeFunction() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction*> __get_m_DetectFocusChangeFunction() const;

constexpr void __set_m_IndexChangeFunction(::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction*  value) ;

constexpr ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction* __get_m_IndexChangeFunction() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction*> __get_m_IndexChangeFunction() const;

static inline ::UnityEngine::UIElements::TextEditorEngine* New_ctor(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction*  detectFocusChange, ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction*  indexChangeFunction) ;

/// @brief Method .ctor addr 0x2e33304 size 0x2c virtual false final false
inline void _ctor(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction*  detectFocusChange, ::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction*  indexChangeFunction) ;

/// @brief Method get_localPosition addr 0x2e33330 size 0x88 virtual true final false
inline ::UnityEngine::Rect get_localPosition() ;

/// @brief Method OnDetectFocusChange addr 0x2e333b8 size 0x24 virtual true final false
inline void OnDetectFocusChange() ;

/// @brief Method OnCursorIndexChange addr 0x2e333dc size 0x24 virtual true final false
inline void OnCursorIndexChange() ;

/// @brief Method OnSelectIndexChange addr 0x2e33400 size 0x24 virtual true final false
inline void OnSelectIndexChange() ;

// Ctor Parameters [CppParam { name: "", ty: "TextEditorEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextEditorEngine(TextEditorEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextEditorEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextEditorEngine(TextEditorEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextEditorEngine()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextEditorEngine, 0xa0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextEditorEngine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextEditorEngine*, "UnityEngine.UIElements", "TextEditorEngine");
NEED_NO_BOX(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextEditorEngine__OnDetectFocusChangeFunction*, "UnityEngine.UIElements", "TextEditorEngine/OnDetectFocusChangeFunction");
NEED_NO_BOX(::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TextEditorEngine__OnIndexChangeFunction*, "UnityEngine.UIElements", "TextEditorEngine/OnIndexChangeFunction");
