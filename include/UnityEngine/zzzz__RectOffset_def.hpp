#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RectOffset)
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Rect;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class RectOffset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RectOffset);
// Type: UnityEngine::RectOffset
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10161))
// CS Name: ::UnityEngine::RectOffset*
class CORDL_TYPE RectOffset : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

/// @brief Field m_SourceStyle offset 0x18
 __declspec(property(get=__get_m_SourceStyle, put=__set_m_SourceStyle)) ::System::Object*  m_SourceStyle;

 __declspec(property(get=get_left, put=set_left)) int32_t  left;

 __declspec(property(get=get_right, put=set_right)) int32_t  right;

 __declspec(property(get=get_top, put=set_top)) int32_t  top;

 __declspec(property(get=get_bottom, put=set_bottom)) int32_t  bottom;

 __declspec(property(get=get_horizontal)) int32_t  horizontal;

 __declspec(property(get=get_vertical)) int32_t  vertical;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() noexcept;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

constexpr void __set_m_SourceStyle(::System::Object*  value) ;

constexpr ::System::Object* __get_m_SourceStyle() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_SourceStyle() const;

static inline ::UnityEngine::RectOffset* New_ctor() ;

/// @brief Method .ctor addr 0x2cc88d4 size 0x48 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::RectOffset* New_ctor(::System::Object*  sourceStyle, ::cordl_internals::intptr_t  source) ;

/// @brief Method .ctor addr 0x2cc8944 size 0x2c virtual false final false
inline void _ctor(::System::Object*  sourceStyle, ::cordl_internals::intptr_t  source) ;

/// @brief Method Finalize addr 0x2cc8970 size 0xa0 virtual true final false
inline void Finalize() ;

static inline ::UnityEngine::RectOffset* New_ctor(int32_t  left, int32_t  right, int32_t  top, int32_t  bottom) ;

/// @brief Method .ctor addr 0x2cc8ab0 size 0x114 virtual false final false
inline void _ctor(int32_t  left, int32_t  right, int32_t  top, int32_t  bottom) ;

/// @brief Method ToString addr 0x2cc8cd4 size 0xc virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x2cc8ce0 size 0x29c virtual true final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method Destroy addr 0x2cc8a10 size 0xa0 virtual false final false
inline void Destroy() ;

/// @brief Method InternalCreate addr 0x2cc891c size 0x28 virtual false final false
static inline ::cordl_internals::intptr_t InternalCreate() ;

/// @brief Method InternalDestroy addr 0x2cc906c size 0x3c virtual false final false
static inline void InternalDestroy(::cordl_internals::intptr_t  ptr) ;

/// @brief Method get_left addr 0x2cc8f7c size 0x3c virtual false final false
inline int32_t get_left() ;

/// @brief Method set_left addr 0x2cc8bc4 size 0x44 virtual false final false
inline void set_left(int32_t  value) ;

/// @brief Method get_right addr 0x2cc8fb8 size 0x3c virtual false final false
inline int32_t get_right() ;

/// @brief Method set_right addr 0x2cc8c08 size 0x44 virtual false final false
inline void set_right(int32_t  value) ;

/// @brief Method get_top addr 0x2cc8ff4 size 0x3c virtual false final false
inline int32_t get_top() ;

/// @brief Method set_top addr 0x2cc8c4c size 0x44 virtual false final false
inline void set_top(int32_t  value) ;

/// @brief Method get_bottom addr 0x2cc9030 size 0x3c virtual false final false
inline int32_t get_bottom() ;

/// @brief Method set_bottom addr 0x2cc8c90 size 0x44 virtual false final false
inline void set_bottom(int32_t  value) ;

/// @brief Method get_horizontal addr 0x2cc90a8 size 0x3c virtual false final false
inline int32_t get_horizontal() ;

/// @brief Method get_vertical addr 0x2cc90e4 size 0x3c virtual false final false
inline int32_t get_vertical() ;

/// @brief Method Remove addr 0x2cc9120 size 0x64 virtual false final false
inline ::UnityEngine::Rect Remove(::UnityEngine::Rect  rect) ;

/// @brief Method Remove_Injected addr 0x2cc9184 size 0x54 virtual false final false
inline void Remove_Injected(ByRef<::UnityEngine::Rect>  rect, ByRef<::UnityEngine::Rect>  ret) ;

// Ctor Parameters [CppParam { name: "", ty: "RectOffset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RectOffset(RectOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectOffset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectOffset(RectOffset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RectOffset()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RectOffset, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::RectOffset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectOffset*, "UnityEngine", "RectOffset");
