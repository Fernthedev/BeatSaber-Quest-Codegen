#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRenderDevice)
namespace UnityEngine::UIElements::UIR {
class TextureSlotManager;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class __Utility__GPUBuffer_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UIElements::UIR {
class Page;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::UIElements::UIR {
class __UIRenderDevice____c;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class LinkedPool_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__DrawStatistics;
}
namespace System {
class Exception;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__DeviceToFree;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__AllocToFree;
}
namespace UnityEngine::UIElements::UIR {
class DrawParams;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__AllocToUpdate;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__EvaluationState;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements::UIR {
struct State;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements::UIR {
class __UIRenderDevice____c;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__AllocToFree;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__AllocToUpdate;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__DeviceToFree;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__DrawStatistics;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__EvaluationState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::UIRenderDevice);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__UIRenderDevice____c);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState);
// Type: ::AllocToUpdate
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7426))
// CS Name: ::UIRenderDevice::AllocToUpdate
struct CORDL_TYPE __UIRenderDevice__AllocToUpdate : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field id offset 0x0
 __declspec(property(get=__get_id, put=__set_id)) uint32_t  id;

/// @brief Field allocTime offset 0x4
 __declspec(property(get=__get_allocTime, put=__set_allocTime)) uint32_t  allocTime;

/// @brief Field meshHandle offset 0x8
 __declspec(property(get=__get_meshHandle, put=__set_meshHandle)) ::UnityEngine::UIElements::UIR::MeshHandle*  meshHandle;

/// @brief Field permAllocVerts offset 0x10
 __declspec(property(get=__get_permAllocVerts, put=__set_permAllocVerts)) ::UnityEngine::UIElements::UIR::Alloc  permAllocVerts;

/// @brief Field permAllocIndices offset 0x28
 __declspec(property(get=__get_permAllocIndices, put=__set_permAllocIndices)) ::UnityEngine::UIElements::UIR::Alloc  permAllocIndices;

/// @brief Field permPage offset 0x40
 __declspec(property(get=__get_permPage, put=__set_permPage)) ::UnityEngine::UIElements::UIR::Page*  permPage;

/// @brief Field copyBackIndices offset 0x48
 __declspec(property(get=__get_copyBackIndices, put=__set_copyBackIndices)) bool  copyBackIndices;

constexpr void __set_id(uint32_t  value) ;

constexpr uint32_t& __get_id() ;

constexpr uint32_t const& __get_id() const;

constexpr void __set_allocTime(uint32_t  value) ;

constexpr uint32_t& __get_allocTime() ;

constexpr uint32_t const& __get_allocTime() const;

constexpr void __set_meshHandle(::UnityEngine::UIElements::UIR::MeshHandle*  value) ;

constexpr ::UnityEngine::UIElements::UIR::MeshHandle* __get_meshHandle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::MeshHandle*> __get_meshHandle() const;

constexpr void __set_permAllocVerts(::UnityEngine::UIElements::UIR::Alloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::Alloc& __get_permAllocVerts() ;

constexpr ::UnityEngine::UIElements::UIR::Alloc const& __get_permAllocVerts() const;

constexpr void __set_permAllocIndices(::UnityEngine::UIElements::UIR::Alloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::Alloc& __get_permAllocIndices() ;

constexpr ::UnityEngine::UIElements::UIR::Alloc const& __get_permAllocIndices() const;

constexpr void __set_permPage(::UnityEngine::UIElements::UIR::Page*  value) ;

constexpr ::UnityEngine::UIElements::UIR::Page* __get_permPage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> __get_permPage() const;

constexpr void __set_copyBackIndices(bool  value) ;

constexpr bool& __get_copyBackIndices() ;

constexpr bool const& __get_copyBackIndices() const;

// Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "allocTime", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "meshHandle", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: None }, CppParam { name: "permAllocVerts", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }, CppParam { name: "permAllocIndices", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }, CppParam { name: "permPage", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None }, CppParam { name: "copyBackIndices", ty: "bool", modifiers: "", def_value: None }]
constexpr __UIRenderDevice__AllocToUpdate(uint32_t  id, uint32_t  allocTime, ::UnityEngine::UIElements::UIR::MeshHandle*  meshHandle, ::UnityEngine::UIElements::UIR::Alloc  permAllocVerts, ::UnityEngine::UIElements::UIR::Alloc  permAllocIndices, ::UnityEngine::UIElements::UIR::Page*  permPage, bool  copyBackIndices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __UIRenderDevice__AllocToUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __UIRenderDevice__AllocToUpdate()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: ::AllocToFree
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7427))
// CS Name: ::UIRenderDevice::AllocToFree
struct CORDL_TYPE __UIRenderDevice__AllocToFree : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field alloc offset 0x0
 __declspec(property(get=__get_alloc, put=__set_alloc)) ::UnityEngine::UIElements::UIR::Alloc  alloc;

/// @brief Field page offset 0x18
 __declspec(property(get=__get_page, put=__set_page)) ::UnityEngine::UIElements::UIR::Page*  page;

/// @brief Field vertices offset 0x20
 __declspec(property(get=__get_vertices, put=__set_vertices)) bool  vertices;

constexpr void __set_alloc(::UnityEngine::UIElements::UIR::Alloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::Alloc& __get_alloc() ;

constexpr ::UnityEngine::UIElements::UIR::Alloc const& __get_alloc() const;

constexpr void __set_page(::UnityEngine::UIElements::UIR::Page*  value) ;

constexpr ::UnityEngine::UIElements::UIR::Page* __get_page() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> __get_page() const;

constexpr void __set_vertices(bool  value) ;

constexpr bool& __get_vertices() ;

constexpr bool const& __get_vertices() const;

// Ctor Parameters [CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None }, CppParam { name: "vertices", ty: "bool", modifiers: "", def_value: None }]
constexpr __UIRenderDevice__AllocToFree(::UnityEngine::UIElements::UIR::Alloc  alloc, ::UnityEngine::UIElements::UIR::Page*  page, bool  vertices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __UIRenderDevice__AllocToFree(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __UIRenderDevice__AllocToFree()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: ::DeviceToFree
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7428))
// CS Name: ::UIRenderDevice::DeviceToFree
struct CORDL_TYPE __UIRenderDevice__DeviceToFree : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field handle offset 0x0
 __declspec(property(get=__get_handle, put=__set_handle)) uint32_t  handle;

/// @brief Field page offset 0x8
 __declspec(property(get=__get_page, put=__set_page)) ::UnityEngine::UIElements::UIR::Page*  page;

constexpr void __set_handle(uint32_t  value) ;

constexpr uint32_t& __get_handle() ;

constexpr uint32_t const& __get_handle() const;

constexpr void __set_page(::UnityEngine::UIElements::UIR::Page*  value) ;

constexpr ::UnityEngine::UIElements::UIR::Page* __get_page() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> __get_page() const;

/// @brief Method Dispose addr 0x2dcf6dc size 0x2c virtual false final false
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None }]
constexpr __UIRenderDevice__DeviceToFree(uint32_t  handle, ::UnityEngine::UIElements::UIR::Page*  page) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __UIRenderDevice__DeviceToFree(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __UIRenderDevice__DeviceToFree()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: ::EvaluationState
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7429))
// CS Name: ::UIRenderDevice::EvaluationState
struct CORDL_TYPE __UIRenderDevice__EvaluationState : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field stateMatProps offset 0x0
 __declspec(property(get=__get_stateMatProps, put=__set_stateMatProps)) ::UnityEngine::MaterialPropertyBlock*  stateMatProps;

/// @brief Field defaultMat offset 0x8
 __declspec(property(get=__get_defaultMat, put=__set_defaultMat)) ::UnityEngine::Material*  defaultMat;

/// @brief Field curState offset 0x10
 __declspec(property(get=__get_curState, put=__set_curState)) ::UnityEngine::UIElements::UIR::State  curState;

/// @brief Field curPage offset 0x30
 __declspec(property(get=__get_curPage, put=__set_curPage)) ::UnityEngine::UIElements::UIR::Page*  curPage;

/// @brief Field mustApplyMaterial offset 0x38
 __declspec(property(get=__get_mustApplyMaterial, put=__set_mustApplyMaterial)) bool  mustApplyMaterial;

/// @brief Field mustApplyCommonBlock offset 0x39
 __declspec(property(get=__get_mustApplyCommonBlock, put=__set_mustApplyCommonBlock)) bool  mustApplyCommonBlock;

/// @brief Field mustApplyStateBlock offset 0x3a
 __declspec(property(get=__get_mustApplyStateBlock, put=__set_mustApplyStateBlock)) bool  mustApplyStateBlock;

/// @brief Field mustApplyStencil offset 0x3b
 __declspec(property(get=__get_mustApplyStencil, put=__set_mustApplyStencil)) bool  mustApplyStencil;

constexpr void __set_stateMatProps(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr ::UnityEngine::MaterialPropertyBlock* __get_stateMatProps() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> __get_stateMatProps() const;

constexpr void __set_defaultMat(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_defaultMat() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_defaultMat() const;

constexpr void __set_curState(::UnityEngine::UIElements::UIR::State  value) ;

constexpr ::UnityEngine::UIElements::UIR::State& __get_curState() ;

constexpr ::UnityEngine::UIElements::UIR::State const& __get_curState() const;

constexpr void __set_curPage(::UnityEngine::UIElements::UIR::Page*  value) ;

constexpr ::UnityEngine::UIElements::UIR::Page* __get_curPage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> __get_curPage() const;

constexpr void __set_mustApplyMaterial(bool  value) ;

constexpr bool& __get_mustApplyMaterial() ;

constexpr bool const& __get_mustApplyMaterial() const;

constexpr void __set_mustApplyCommonBlock(bool  value) ;

constexpr bool& __get_mustApplyCommonBlock() ;

constexpr bool const& __get_mustApplyCommonBlock() const;

constexpr void __set_mustApplyStateBlock(bool  value) ;

constexpr bool& __get_mustApplyStateBlock() ;

constexpr bool const& __get_mustApplyStateBlock() const;

constexpr void __set_mustApplyStencil(bool  value) ;

constexpr bool& __get_mustApplyStencil() ;

constexpr bool const& __get_mustApplyStencil() const;

// Ctor Parameters [CppParam { name: "stateMatProps", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None }, CppParam { name: "defaultMat", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "curState", ty: "::UnityEngine::UIElements::UIR::State", modifiers: "", def_value: None }, CppParam { name: "curPage", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None }, CppParam { name: "mustApplyMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mustApplyCommonBlock", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mustApplyStateBlock", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mustApplyStencil", ty: "bool", modifiers: "", def_value: None }]
constexpr __UIRenderDevice__EvaluationState(::UnityEngine::MaterialPropertyBlock*  stateMatProps, ::UnityEngine::Material*  defaultMat, ::UnityEngine::UIElements::UIR::State  curState, ::UnityEngine::UIElements::UIR::Page*  curPage, bool  mustApplyMaterial, bool  mustApplyCommonBlock, bool  mustApplyStateBlock, bool  mustApplyStencil) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __UIRenderDevice__EvaluationState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __UIRenderDevice__EvaluationState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: ::DrawStatistics
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7430))
// CS Name: ::UIRenderDevice::DrawStatistics
struct CORDL_TYPE __UIRenderDevice__DrawStatistics : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field currentFrameIndex offset 0x0
 __declspec(property(get=__get_currentFrameIndex, put=__set_currentFrameIndex)) int32_t  currentFrameIndex;

/// @brief Field totalIndices offset 0x4
 __declspec(property(get=__get_totalIndices, put=__set_totalIndices)) uint32_t  totalIndices;

/// @brief Field commandCount offset 0x8
 __declspec(property(get=__get_commandCount, put=__set_commandCount)) uint32_t  commandCount;

/// @brief Field drawCommandCount offset 0xc
 __declspec(property(get=__get_drawCommandCount, put=__set_drawCommandCount)) uint32_t  drawCommandCount;

/// @brief Field materialSetCount offset 0x10
 __declspec(property(get=__get_materialSetCount, put=__set_materialSetCount)) uint32_t  materialSetCount;

/// @brief Field drawRangeCount offset 0x14
 __declspec(property(get=__get_drawRangeCount, put=__set_drawRangeCount)) uint32_t  drawRangeCount;

/// @brief Field drawRangeCallCount offset 0x18
 __declspec(property(get=__get_drawRangeCallCount, put=__set_drawRangeCallCount)) uint32_t  drawRangeCallCount;

/// @brief Field immediateDraws offset 0x1c
 __declspec(property(get=__get_immediateDraws, put=__set_immediateDraws)) uint32_t  immediateDraws;

/// @brief Field stencilRefChanges offset 0x20
 __declspec(property(get=__get_stencilRefChanges, put=__set_stencilRefChanges)) uint32_t  stencilRefChanges;

constexpr void __set_currentFrameIndex(int32_t  value) ;

constexpr int32_t& __get_currentFrameIndex() ;

constexpr int32_t const& __get_currentFrameIndex() const;

constexpr void __set_totalIndices(uint32_t  value) ;

constexpr uint32_t& __get_totalIndices() ;

constexpr uint32_t const& __get_totalIndices() const;

constexpr void __set_commandCount(uint32_t  value) ;

constexpr uint32_t& __get_commandCount() ;

constexpr uint32_t const& __get_commandCount() const;

constexpr void __set_drawCommandCount(uint32_t  value) ;

constexpr uint32_t& __get_drawCommandCount() ;

constexpr uint32_t const& __get_drawCommandCount() const;

constexpr void __set_materialSetCount(uint32_t  value) ;

constexpr uint32_t& __get_materialSetCount() ;

constexpr uint32_t const& __get_materialSetCount() const;

constexpr void __set_drawRangeCount(uint32_t  value) ;

constexpr uint32_t& __get_drawRangeCount() ;

constexpr uint32_t const& __get_drawRangeCount() const;

constexpr void __set_drawRangeCallCount(uint32_t  value) ;

constexpr uint32_t& __get_drawRangeCallCount() ;

constexpr uint32_t const& __get_drawRangeCallCount() const;

constexpr void __set_immediateDraws(uint32_t  value) ;

constexpr uint32_t& __get_immediateDraws() ;

constexpr uint32_t const& __get_immediateDraws() const;

constexpr void __set_stencilRefChanges(uint32_t  value) ;

constexpr uint32_t& __get_stencilRefChanges() ;

constexpr uint32_t const& __get_stencilRefChanges() const;

// Ctor Parameters [CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalIndices", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "commandCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawCommandCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "materialSetCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawRangeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawRangeCallCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "immediateDraws", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "stencilRefChanges", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __UIRenderDevice__DrawStatistics(int32_t  currentFrameIndex, uint32_t  totalIndices, uint32_t  commandCount, uint32_t  drawCommandCount, uint32_t  materialSetCount, uint32_t  drawRangeCount, uint32_t  drawRangeCallCount, uint32_t  immediateDraws, uint32_t  stencilRefChanges) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __UIRenderDevice__DrawStatistics(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __UIRenderDevice__DrawStatistics()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, 0x24>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: ::<>c
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7431))
// CS Name: ::UIRenderDevice::<>c*
class CORDL_TYPE __UIRenderDevice____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::UIElements::UIR::__UIRenderDevice____c*  value) ;

static inline ::UnityEngine::UIElements::UIR::__UIRenderDevice____c* getStaticF___9() ;

static inline void setStaticF___9__53_0(::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  value) ;

static inline ::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* getStaticF___9__53_0() ;

static inline void setStaticF___9__53_1(::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  value) ;

static inline ::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* getStaticF___9__53_1() ;

static inline ::UnityEngine::UIElements::UIR::__UIRenderDevice____c* New_ctor() ;

/// @brief Method .ctor addr 0x2dd4e60 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__53_0 addr 0x2dd4e68 size 0x58 virtual false final false
inline ::UnityEngine::UIElements::UIR::MeshHandle* __ctor_b__53_0() ;

/// @brief Method <.ctor>b__53_1 addr 0x2dd4ec0 size 0x4 virtual false final false
inline void __ctor_b__53_1(::UnityEngine::UIElements::UIR::MeshHandle*  mh) ;

// Ctor Parameters [CppParam { name: "", ty: "__UIRenderDevice____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UIRenderDevice____c(__UIRenderDevice____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UIRenderDevice____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UIRenderDevice____c(__UIRenderDevice____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UIRenderDevice____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__53_0

// Static field <>9__53_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::UIRenderDevice
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7432))
// CS Name: ::UnityEngine.UIElements.UIR::UIRenderDevice*
class CORDL_TYPE UIRenderDevice : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::UIElements::UIR::__UIRenderDevice____c;

using DrawStatistics = ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics;

using EvaluationState = ::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState;

using DeviceToFree = ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree;

using AllocToFree = ::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree;

using AllocToUpdate = ::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::Object)]{};

/// @brief Field m_MockDevice offset 0x10
 __declspec(property(get=__get_m_MockDevice, put=__set_m_MockDevice)) bool  m_MockDevice;

/// @brief Field m_DefaultStencilState offset 0x18
 __declspec(property(get=__get_m_DefaultStencilState, put=__set_m_DefaultStencilState)) ::cordl_internals::intptr_t  m_DefaultStencilState;

/// @brief Field m_VertexDecl offset 0x20
 __declspec(property(get=__get_m_VertexDecl, put=__set_m_VertexDecl)) ::cordl_internals::intptr_t  m_VertexDecl;

/// @brief Field m_FirstPage offset 0x28
 __declspec(property(get=__get_m_FirstPage, put=__set_m_FirstPage)) ::UnityEngine::UIElements::UIR::Page*  m_FirstPage;

/// @brief Field m_NextPageVertexCount offset 0x30
 __declspec(property(get=__get_m_NextPageVertexCount, put=__set_m_NextPageVertexCount)) uint32_t  m_NextPageVertexCount;

/// @brief Field m_LargeMeshVertexCount offset 0x34
 __declspec(property(get=__get_m_LargeMeshVertexCount, put=__set_m_LargeMeshVertexCount)) uint32_t  m_LargeMeshVertexCount;

/// @brief Field m_IndexToVertexCountRatio offset 0x38
 __declspec(property(get=__get_m_IndexToVertexCountRatio, put=__set_m_IndexToVertexCountRatio)) float_t  m_IndexToVertexCountRatio;

/// @brief Field m_DeferredFrees offset 0x40
 __declspec(property(get=__get_m_DeferredFrees, put=__set_m_DeferredFrees)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>*  m_DeferredFrees;

/// @brief Field m_Updates offset 0x48
 __declspec(property(get=__get_m_Updates, put=__set_m_Updates)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>*  m_Updates;

/// @brief Field m_Fences offset 0x50
 __declspec(property(get=__get_m_Fences, put=__set_m_Fences)) ::ArrayW<uint32_t,::Array<uint32_t>*>  m_Fences;

/// @brief Field m_StandardMatProps offset 0x58
 __declspec(property(get=__get_m_StandardMatProps, put=__set_m_StandardMatProps)) ::UnityEngine::MaterialPropertyBlock*  m_StandardMatProps;

/// @brief Field m_FrameIndex offset 0x60
 __declspec(property(get=__get_m_FrameIndex, put=__set_m_FrameIndex)) uint32_t  m_FrameIndex;

/// @brief Field m_NextUpdateID offset 0x64
 __declspec(property(get=__get_m_NextUpdateID, put=__set_m_NextUpdateID)) uint32_t  m_NextUpdateID;

/// @brief Field m_DrawStats offset 0x68
 __declspec(property(get=__get_m_DrawStats, put=__set_m_DrawStats)) ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics  m_DrawStats;

/// @brief Field m_MeshHandles offset 0x90
 __declspec(property(get=__get_m_MeshHandles, put=__set_m_MeshHandles)) ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  m_MeshHandles;

/// @brief Field m_DrawParams offset 0x98
 __declspec(property(get=__get_m_DrawParams, put=__set_m_DrawParams)) ::UnityEngine::UIElements::UIR::DrawParams*  m_DrawParams;

/// @brief Field m_TextureSlotManager offset 0xa0
 __declspec(property(get=__get_m_TextureSlotManager, put=__set_m_TextureSlotManager)) ::UnityEngine::UIElements::UIR::TextureSlotManager*  m_TextureSlotManager;

/// @brief Field <maxVerticesPerPage>k__BackingField offset 0xa8
 __declspec(property(get=__get__maxVerticesPerPage_k__BackingField, put=__set__maxVerticesPerPage_k__BackingField)) uint32_t  _maxVerticesPerPage_k__BackingField;

/// @brief Field <breakBatches>k__BackingField offset 0xac
 __declspec(property(get=__get__breakBatches_k__BackingField, put=__set__breakBatches_k__BackingField)) bool  _breakBatches_k__BackingField;

/// @brief Field <disposed>k__BackingField offset 0xad
 __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField)) bool  _disposed_k__BackingField;

 __declspec(property(get=get_maxVerticesPerPage)) uint32_t  maxVerticesPerPage;

 __declspec(property(get=get_breakBatches, put=set_breakBatches)) bool  breakBatches;

 __declspec(property(get=get_fullyCreated)) bool  fullyCreated;

 __declspec(property(get=get_disposed, put=set_disposed)) bool  disposed;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_MockDevice(bool  value) ;

constexpr bool& __get_m_MockDevice() ;

constexpr bool const& __get_m_MockDevice() const;

constexpr void __set_m_DefaultStencilState(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_DefaultStencilState() ;

constexpr ::cordl_internals::intptr_t const& __get_m_DefaultStencilState() const;

constexpr void __set_m_VertexDecl(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_VertexDecl() ;

constexpr ::cordl_internals::intptr_t const& __get_m_VertexDecl() const;

constexpr void __set_m_FirstPage(::UnityEngine::UIElements::UIR::Page*  value) ;

constexpr ::UnityEngine::UIElements::UIR::Page* __get_m_FirstPage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> __get_m_FirstPage() const;

constexpr void __set_m_NextPageVertexCount(uint32_t  value) ;

constexpr uint32_t& __get_m_NextPageVertexCount() ;

constexpr uint32_t const& __get_m_NextPageVertexCount() const;

constexpr void __set_m_LargeMeshVertexCount(uint32_t  value) ;

constexpr uint32_t& __get_m_LargeMeshVertexCount() ;

constexpr uint32_t const& __get_m_LargeMeshVertexCount() const;

constexpr void __set_m_IndexToVertexCountRatio(float_t  value) ;

constexpr float_t& __get_m_IndexToVertexCountRatio() ;

constexpr float_t const& __get_m_IndexToVertexCountRatio() const;

constexpr void __set_m_DeferredFrees(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>* __get_m_DeferredFrees() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>*> __get_m_DeferredFrees() const;

constexpr void __set_m_Updates(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>* __get_m_Updates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>*> __get_m_Updates() const;

constexpr void __set_m_Fences(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_m_Fences() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_m_Fences() const;

constexpr void __set_m_StandardMatProps(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr ::UnityEngine::MaterialPropertyBlock* __get_m_StandardMatProps() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> __get_m_StandardMatProps() const;

constexpr void __set_m_FrameIndex(uint32_t  value) ;

constexpr uint32_t& __get_m_FrameIndex() ;

constexpr uint32_t const& __get_m_FrameIndex() const;

constexpr void __set_m_NextUpdateID(uint32_t  value) ;

constexpr uint32_t& __get_m_NextUpdateID() ;

constexpr uint32_t const& __get_m_NextUpdateID() const;

constexpr void __set_m_DrawStats(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics  value) ;

constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics& __get_m_DrawStats() ;

constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics const& __get_m_DrawStats() const;

constexpr void __set_m_MeshHandles(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  value) ;

constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* __get_m_MeshHandles() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*> __get_m_MeshHandles() const;

constexpr void __set_m_DrawParams(::UnityEngine::UIElements::UIR::DrawParams*  value) ;

constexpr ::UnityEngine::UIElements::UIR::DrawParams* __get_m_DrawParams() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::DrawParams*> __get_m_DrawParams() const;

constexpr void __set_m_TextureSlotManager(::UnityEngine::UIElements::UIR::TextureSlotManager*  value) ;

constexpr ::UnityEngine::UIElements::UIR::TextureSlotManager* __get_m_TextureSlotManager() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::TextureSlotManager*> __get_m_TextureSlotManager() const;

static inline void setStaticF_m_DeviceFreeQueue(::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  value) ;

static inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* getStaticF_m_DeviceFreeQueue() ;

static inline void setStaticF_m_ActiveDeviceCount(int32_t  value) ;

static inline int32_t getStaticF_m_ActiveDeviceCount() ;

static inline void setStaticF_m_SubscribedToNotifications(bool  value) ;

static inline bool getStaticF_m_SubscribedToNotifications() ;

static inline void setStaticF_m_SynchronousFree(bool  value) ;

static inline bool getStaticF_m_SynchronousFree() ;

static inline void setStaticF_s_FontTexPropID(int32_t  value) ;

static inline int32_t getStaticF_s_FontTexPropID() ;

static inline void setStaticF_s_FontTexSDFScaleID(int32_t  value) ;

static inline int32_t getStaticF_s_FontTexSDFScaleID() ;

static inline void setStaticF_s_GradientSettingsTexID(int32_t  value) ;

static inline int32_t getStaticF_s_GradientSettingsTexID() ;

static inline void setStaticF_s_ShaderInfoTexID(int32_t  value) ;

static inline int32_t getStaticF_s_ShaderInfoTexID() ;

static inline void setStaticF_s_TransformsPropID(int32_t  value) ;

static inline int32_t getStaticF_s_TransformsPropID() ;

static inline void setStaticF_s_ClipRectsPropID(int32_t  value) ;

static inline int32_t getStaticF_s_ClipRectsPropID() ;

static inline void setStaticF_s_ClipSpaceParamsID(int32_t  value) ;

static inline int32_t getStaticF_s_ClipSpaceParamsID() ;

static inline void setStaticF_s_MarkerAllocate(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerAllocate() ;

static inline void setStaticF_s_MarkerFree(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerFree() ;

static inline void setStaticF_s_MarkerAdvanceFrame(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerAdvanceFrame() ;

static inline void setStaticF_s_MarkerFence(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerFence() ;

static inline void setStaticF_s_MarkerBeforeDraw(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerBeforeDraw() ;

static inline void setStaticF_s_VertexTexturingIsAvailable(::System::Nullable_1<bool>  value) ;

static inline ::System::Nullable_1<bool> getStaticF_s_VertexTexturingIsAvailable() ;

static inline void setStaticF_s_ShaderModelIs35(::System::Nullable_1<bool>  value) ;

static inline ::System::Nullable_1<bool> getStaticF_s_ShaderModelIs35() ;

constexpr void __set__maxVerticesPerPage_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__maxVerticesPerPage_k__BackingField() ;

constexpr uint32_t const& __get__maxVerticesPerPage_k__BackingField() const;

constexpr void __set__breakBatches_k__BackingField(bool  value) ;

constexpr bool& __get__breakBatches_k__BackingField() ;

constexpr bool const& __get__breakBatches_k__BackingField() const;

static inline void setStaticF_s_DefaultShaderInfoTexFloat(::UnityEngine::Texture2D*  value) ;

static inline ::UnityEngine::Texture2D* getStaticF_s_DefaultShaderInfoTexFloat() ;

static inline void setStaticF_s_DefaultShaderInfoTexARGB8(::UnityEngine::Texture2D*  value) ;

static inline ::UnityEngine::Texture2D* getStaticF_s_DefaultShaderInfoTexARGB8() ;

constexpr void __set__disposed_k__BackingField(bool  value) ;

constexpr bool& __get__disposed_k__BackingField() ;

constexpr bool const& __get__disposed_k__BackingField() const;

/// @brief Method get_maxVerticesPerPage addr 0x2dcdbe8 size 0x8 virtual false final false
inline uint32_t get_maxVerticesPerPage() ;

/// @brief Method get_breakBatches addr 0x2dcdbf0 size 0x8 virtual false final false
inline bool get_breakBatches() ;

/// @brief Method set_breakBatches addr 0x2dcdbf8 size 0xc virtual false final false
inline void set_breakBatches(bool  value) ;

static inline ::UnityEngine::UIElements::UIR::UIRenderDevice* New_ctor(uint32_t  initialVertexCapacity, uint32_t  initialIndexCapacity) ;

/// @brief Method .ctor addr 0x2dcdfbc size 0x8 virtual false final false
inline void _ctor(uint32_t  initialVertexCapacity, uint32_t  initialIndexCapacity) ;

static inline ::UnityEngine::UIElements::UIR::UIRenderDevice* New_ctor(uint32_t  initialVertexCapacity, uint32_t  initialIndexCapacity, bool  mockDevice) ;

/// @brief Method .ctor addr 0x2dcdfc4 size 0x5b0 virtual false final false
inline void _ctor(uint32_t  initialVertexCapacity, uint32_t  initialIndexCapacity, bool  mockDevice) ;

/// @brief Method get_defaultShaderInfoTexFloat addr 0x2dce6cc size 0x394 virtual false final false
static inline ::UnityEngine::Texture2D* get_defaultShaderInfoTexFloat() ;

/// @brief Method get_defaultShaderInfoTexARGB8 addr 0x2dcea60 size 0x2cc virtual false final false
static inline ::UnityEngine::Texture2D* get_defaultShaderInfoTexARGB8() ;

/// @brief Method get_vertexTexturingIsAvailable addr 0x2dced2c size 0x1e4 virtual false final false
static inline bool get_vertexTexturingIsAvailable() ;

/// @brief Method get_shaderModelIs35 addr 0x2dcef10 size 0x1e4 virtual false final false
static inline bool get_shaderModelIs35() ;

/// @brief Method InitVertexDeclaration addr 0x2dcf0f4 size 0x268 virtual false final false
inline void InitVertexDeclaration() ;

/// @brief Method CompleteCreation addr 0x2dcf35c size 0x1a4 virtual false final false
inline void CompleteCreation() ;

/// @brief Method get_fullyCreated addr 0x2dcf500 size 0x10 virtual false final false
inline bool get_fullyCreated() ;

/// @brief Method get_disposed addr 0x2dcf510 size 0x8 virtual false final false
inline bool get_disposed() ;

/// @brief Method set_disposed addr 0x2dcf518 size 0xc virtual false final false
inline void set_disposed(bool  value) ;

/// @brief Method Dispose addr 0x2dcf524 size 0x6c virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x2dcf590 size 0x14c virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method Allocate addr 0x2dcfaa4 size 0xc0 virtual false final false
inline ::UnityEngine::UIElements::UIR::MeshHandle* Allocate(uint32_t  vertexCount, uint32_t  indexCount, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertexData, ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>  indexData, ByRef<uint16_t>  indexOffset) ;

/// @brief Method Update addr 0x2dd0198 size 0x1c8 virtual false final false
inline void Update(::UnityEngine::UIElements::UIR::MeshHandle*  mesh, uint32_t  vertexCount, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertexData) ;

/// @brief Method Update addr 0x2dd0a64 size 0x188 virtual false final false
inline void Update(::UnityEngine::UIElements::UIR::MeshHandle*  mesh, uint32_t  vertexCount, uint32_t  indexCount, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertexData, ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>  indexData, ByRef<uint16_t>  indexOffset) ;

/// @brief Method TryAllocFromPage addr 0x2dd0bec size 0x104 virtual false final false
inline bool TryAllocFromPage(::UnityEngine::UIElements::UIR::Page*  page, uint32_t  vertexCount, uint32_t  indexCount, ByRef<::UnityEngine::UIElements::UIR::Alloc>  va, ByRef<::UnityEngine::UIElements::UIR::Alloc>  ia, bool  shortLived) ;

/// @brief Method Allocate addr 0x2dcfb64 size 0x634 virtual false final false
inline void Allocate(::UnityEngine::UIElements::UIR::MeshHandle*  meshHandle, uint32_t  vertexCount, uint32_t  indexCount, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertexData, ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>  indexData, bool  shortLived) ;

/// @brief Method UpdateAfterGPUUsedData addr 0x2dd0360 size 0x704 virtual false final false
inline void UpdateAfterGPUUsedData(::UnityEngine::UIElements::UIR::MeshHandle*  mesh, uint32_t  vertexCount, uint32_t  indexCount, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  vertexData, ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>  indexData, ByRef<uint16_t>  indexOffset, ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>  allocToUpdate, bool  copyBackIndices) ;

/// @brief Method Free addr 0x2dd1044 size 0x84c virtual false final false
inline void Free(::UnityEngine::UIElements::UIR::MeshHandle*  mesh) ;

/// @brief Method GetClipSpaceParams addr 0x2dd1890 size 0xc8 virtual false final false
static inline ::UnityEngine::Vector4 GetClipSpaceParams() ;

/// @brief Method OnFrameRenderingBegin addr 0x2dd1958 size 0xa4 virtual false final false
inline void OnFrameRenderingBegin() ;

/// @brief Method PtrToSlice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::Unity::Collections::NativeSlice_1<T> PtrToSlice(::cordl_internals::Ptr<void>  p, int32_t  count) ;

/// @brief Method ApplyDrawCommandState addr 0x2dd23b0 size 0x224 virtual false final false
inline void ApplyDrawCommandState(::UnityEngine::UIElements::UIR::RenderChainCommand*  cmd, int32_t  textureSlot, ::UnityEngine::Material*  newMat, bool  newMatDiffers, bool  newFontDiffers, ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState>  st) ;

/// @brief Method ApplyBatchState addr 0x2dd25d4 size 0x184 virtual false final false
inline void ApplyBatchState(ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState>  st, bool  allowMaterialChange) ;

/// @brief Method EvaluateChain addr 0x2dd2758 size 0x1118 virtual false final false
inline void EvaluateChain(::UnityEngine::UIElements::UIR::RenderChainCommand*  head, ::UnityEngine::Material*  initialMat, ::UnityEngine::Material*  defaultMat, ::UnityEngine::Texture*  gradientSettings, ::UnityEngine::Texture*  shaderInfo, float_t  pixelsPerPoint, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>  transforms, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  clipRects, ::UnityEngine::MaterialPropertyBlock*  stateMatProps, bool  allowMaterialChange, ByRef<::System::Exception*>  immediateException) ;

/// @brief Method UpdateFenceValue addr 0x2dd4840 size 0xcc virtual false final false
inline void UpdateFenceValue() ;

/// @brief Method KickRanges addr 0x2dd3a3c size 0x248 virtual false final false
inline void KickRanges(::cordl_internals::Ptr<::UnityEngine::UIElements::UIR::DrawBufferRange>  ranges, ByRef<int32_t>  rangesReady, ByRef<int32_t>  rangesStart, int32_t  rangesCount, ::UnityEngine::UIElements::UIR::Page*  curPage) ;

/// @brief Method DrawRanges addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename I,typename T>
inline void DrawRanges(::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<I>*  ib, ::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>*  vb, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  ranges) ;

/// @brief Method WaitOnCpuFence addr 0x2dd490c size 0x88 virtual false final false
inline void WaitOnCpuFence(uint32_t  fence) ;

/// @brief Method AdvanceFrame addr 0x2dd19fc size 0x9b4 virtual false final false
inline void AdvanceFrame() ;

/// @brief Method PruneUnusedPages addr 0x2dd4994 size 0xdc virtual false final false
inline void PruneUnusedPages() ;

/// @brief Method PrepareForGfxDeviceRecreate addr 0x2dd4adc size 0x188 virtual false final false
static inline void PrepareForGfxDeviceRecreate() ;

/// @brief Method WrapUpGfxDeviceRecreate addr 0x2dd4c64 size 0x60 virtual false final false
static inline void WrapUpGfxDeviceRecreate() ;

/// @brief Method FlushAllPendingDeviceDisposes addr 0x2dd4cc4 size 0x78 virtual false final false
static inline void FlushAllPendingDeviceDisposes() ;

/// @brief Method GatherDrawStatistics addr 0x2dd4d3c size 0x18 virtual false final false
inline ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics GatherDrawStatistics() ;

/// @brief Method ProcessDeviceFreeQueue addr 0x2dcf708 size 0x39c virtual false final false
static inline void ProcessDeviceFreeQueue() ;

/// @brief Method OnEngineUpdateGlobal addr 0x2dd4d54 size 0x4c virtual false final false
static inline void OnEngineUpdateGlobal() ;

/// @brief Method OnFlushPendingResources addr 0x2dd4da0 size 0x5c virtual false final false
static inline void OnFlushPendingResources() ;

// Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIRenderDevice(UIRenderDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIRenderDevice(UIRenderDevice const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UIRenderDevice()  = default;
public:


// Fields

// Static field m_DeviceFreeQueue

// Static field m_ActiveDeviceCount

// Static field m_SubscribedToNotifications

// Static field m_SynchronousFree

// Static field s_FontTexPropID

// Static field s_FontTexSDFScaleID

// Static field s_GradientSettingsTexID

// Static field s_ShaderInfoTexID

// Static field s_TransformsPropID

// Static field s_ClipRectsPropID

// Static field s_ClipSpaceParamsID

// Static field s_MarkerAllocate

// Static field s_MarkerFree

// Static field s_MarkerAdvanceFrame

// Static field s_MarkerFence

// Static field s_MarkerBeforeDraw

// Static field s_VertexTexturingIsAvailable

// Static field s_ShaderModelIs35

// Static field s_DefaultShaderInfoTexFloat

// Static field s_DefaultShaderInfoTexARGB8


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRenderDevice, 0xb0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::UIRenderDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRenderDevice*, "UnityEngine.UIElements.UIR", "UIRenderDevice");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__UIRenderDevice____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice____c*, "UnityEngine.UIElements.UIR", "UIRenderDevice/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree, "UnityEngine.UIElements.UIR", "UIRenderDevice/AllocToFree");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, "UnityEngine.UIElements.UIR", "UIRenderDevice/AllocToUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree, "UnityEngine.UIElements.UIR", "UIRenderDevice/DeviceToFree");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, "UnityEngine.UIElements.UIR", "UIRenderDevice/DrawStatistics");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, "UnityEngine.UIElements.UIR", "UIRenderDevice/EvaluationState");
