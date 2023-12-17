#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GUIStyleState)
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class GUIStyleState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIStyleState);
// Type: UnityEngine::GUIStyleState
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14624))
// CS Name: ::UnityEngine::GUIStyleState*
class CORDL_TYPE GUIStyleState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

/// @brief Field m_SourceStyle offset 0x18
 __declspec(property(get=__get_m_SourceStyle, put=__set_m_SourceStyle)) ::UnityEngine::GUIStyle*  m_SourceStyle;

 __declspec(property(put=set_textColor)) ::UnityEngine::Color  textColor;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

constexpr void __set_m_SourceStyle(::UnityEngine::GUIStyle*  value) ;

constexpr ::UnityEngine::GUIStyle* __get_m_SourceStyle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> __get_m_SourceStyle() const;

/// @brief Method set_textColor addr 0x2d0c684 size 0x54 virtual false final false
inline void set_textColor(::UnityEngine::Color  value) ;

/// @brief Method Init addr 0x2d0c71c size 0x28 virtual false final false
static inline ::cordl_internals::intptr_t Init() ;

/// @brief Method Cleanup addr 0x2d0c744 size 0x3c virtual false final false
inline void Cleanup() ;

static inline ::UnityEngine::GUIStyleState* New_ctor() ;

/// @brief Method .ctor addr 0x2d0c780 size 0x48 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::GUIStyleState* New_ctor(::UnityEngine::GUIStyle*  sourceStyle, ::cordl_internals::intptr_t  source) ;

/// @brief Method .ctor addr 0x2d0c7c8 size 0x2c virtual false final false
inline void _ctor(::UnityEngine::GUIStyle*  sourceStyle, ::cordl_internals::intptr_t  source) ;

/// @brief Method GetGUIStyleState addr 0x2d0c7f4 size 0x70 virtual false final false
static inline ::UnityEngine::GUIStyleState* GetGUIStyleState(::UnityEngine::GUIStyle*  sourceStyle, ::cordl_internals::intptr_t  source) ;

/// @brief Method Finalize addr 0x2d0c864 size 0xf8 virtual true final false
inline void Finalize() ;

/// @brief Method set_textColor_Injected addr 0x2d0c6d8 size 0x44 virtual false final false
inline void set_textColor_Injected(ByRef<::UnityEngine::Color>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "GUIStyleState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIStyleState(GUIStyleState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIStyleState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIStyleState(GUIStyleState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GUIStyleState()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIStyleState, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::GUIStyleState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIStyleState*, "UnityEngine", "GUIStyleState");
