#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WingedEdgeEnumerator)
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class WingedEdgeEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::WingedEdgeEnumerator);
// Type: UnityEngine.ProBuilder::WingedEdgeEnumerator
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12223))
// CS Name: ::UnityEngine.ProBuilder::WingedEdgeEnumerator*
class CORDL_TYPE WingedEdgeEnumerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Start offset 0x10
 __declspec(property(get=__get_m_Start, put=__set_m_Start)) ::UnityEngine::ProBuilder::WingedEdge*  m_Start;

/// @brief Field m_Current offset 0x18
 __declspec(property(get=__get_m_Current, put=__set_m_Current)) ::UnityEngine::ProBuilder::WingedEdge*  m_Current;

 __declspec(property(get=get_Current)) ::UnityEngine::ProBuilder::WingedEdge*  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_Start(::UnityEngine::ProBuilder::WingedEdge*  value) ;

constexpr ::UnityEngine::ProBuilder::WingedEdge* __get_m_Start() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::WingedEdge*> __get_m_Start() const;

constexpr void __set_m_Current(::UnityEngine::ProBuilder::WingedEdge*  value) ;

constexpr ::UnityEngine::ProBuilder::WingedEdge* __get_m_Current() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::WingedEdge*> __get_m_Current() const;

static inline ::UnityEngine::ProBuilder::WingedEdgeEnumerator* New_ctor(::UnityEngine::ProBuilder::WingedEdge*  start) ;

/// @brief Method .ctor addr 0x2b86ce4 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::ProBuilder::WingedEdge*  start) ;

/// @brief Method MoveNext addr 0x2b86d0c size 0x3c virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x2b86d48 size 0x8 virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x2b86d50 size 0x8 virtual true final true
inline ::UnityEngine::ProBuilder::WingedEdge* get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2b86d58 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x2b86d60 size 0x4 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "WingedEdgeEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WingedEdgeEnumerator(WingedEdgeEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WingedEdgeEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WingedEdgeEnumerator(WingedEdgeEnumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WingedEdgeEnumerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::WingedEdgeEnumerator, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::WingedEdgeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WingedEdgeEnumerator*, "UnityEngine.ProBuilder", "WingedEdgeEnumerator");
