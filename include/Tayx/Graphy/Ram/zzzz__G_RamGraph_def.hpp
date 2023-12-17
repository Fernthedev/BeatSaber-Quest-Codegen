#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tayx/Graphy/Graph/zzzz__G_Graph_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_RamGraph)
namespace UnityEngine::UI {
class Image;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace Tayx::Graphy {
class G_GraphShader;
}
namespace UnityEngine {
class Shader;
}
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
// Forward declare root types
namespace Tayx::Graphy::Ram {
class G_RamGraph;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Ram::G_RamGraph);
// Type: Tayx.Graphy.Ram::G_RamGraph
namespace Tayx::Graphy::Ram {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15076))
// CS Name: ::Tayx.Graphy.Ram::G_RamGraph*
class CORDL_TYPE G_RamGraph : public ::Tayx::Graphy::Graph::G_Graph {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::Tayx::Graphy::Graph::G_Graph)]{};

/// @brief Field m_imageAllocated offset 0x18
 __declspec(property(get=__get_m_imageAllocated, put=__set_m_imageAllocated)) ::UnityEngine::UI::Image*  m_imageAllocated;

/// @brief Field m_imageReserved offset 0x20
 __declspec(property(get=__get_m_imageReserved, put=__set_m_imageReserved)) ::UnityEngine::UI::Image*  m_imageReserved;

/// @brief Field m_imageMono offset 0x28
 __declspec(property(get=__get_m_imageMono, put=__set_m_imageMono)) ::UnityEngine::UI::Image*  m_imageMono;

/// @brief Field ShaderFull offset 0x30
 __declspec(property(get=__get_ShaderFull, put=__set_ShaderFull)) ::UnityEngine::Shader*  ShaderFull;

/// @brief Field ShaderLight offset 0x38
 __declspec(property(get=__get_ShaderLight, put=__set_ShaderLight)) ::UnityEngine::Shader*  ShaderLight;

/// @brief Field m_isInitialized offset 0x40
 __declspec(property(get=__get_m_isInitialized, put=__set_m_isInitialized)) bool  m_isInitialized;

/// @brief Field m_graphyManager offset 0x48
 __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager)) ::Tayx::Graphy::GraphyManager*  m_graphyManager;

/// @brief Field m_ramMonitor offset 0x50
 __declspec(property(get=__get_m_ramMonitor, put=__set_m_ramMonitor)) ::Tayx::Graphy::Ram::G_RamMonitor*  m_ramMonitor;

/// @brief Field m_resolution offset 0x58
 __declspec(property(get=__get_m_resolution, put=__set_m_resolution)) int32_t  m_resolution;

/// @brief Field m_shaderGraphAllocated offset 0x60
 __declspec(property(get=__get_m_shaderGraphAllocated, put=__set_m_shaderGraphAllocated)) ::Tayx::Graphy::G_GraphShader*  m_shaderGraphAllocated;

/// @brief Field m_shaderGraphReserved offset 0x68
 __declspec(property(get=__get_m_shaderGraphReserved, put=__set_m_shaderGraphReserved)) ::Tayx::Graphy::G_GraphShader*  m_shaderGraphReserved;

/// @brief Field m_shaderGraphMono offset 0x70
 __declspec(property(get=__get_m_shaderGraphMono, put=__set_m_shaderGraphMono)) ::Tayx::Graphy::G_GraphShader*  m_shaderGraphMono;

/// @brief Field m_allocatedArray offset 0x78
 __declspec(property(get=__get_m_allocatedArray, put=__set_m_allocatedArray)) ::ArrayW<float_t,::Array<float_t>*>  m_allocatedArray;

/// @brief Field m_reservedArray offset 0x80
 __declspec(property(get=__get_m_reservedArray, put=__set_m_reservedArray)) ::ArrayW<float_t,::Array<float_t>*>  m_reservedArray;

/// @brief Field m_monoArray offset 0x88
 __declspec(property(get=__get_m_monoArray, put=__set_m_monoArray)) ::ArrayW<float_t,::Array<float_t>*>  m_monoArray;

/// @brief Field m_highestMemory offset 0x90
 __declspec(property(get=__get_m_highestMemory, put=__set_m_highestMemory)) float_t  m_highestMemory;

constexpr void __set_m_imageAllocated(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get_m_imageAllocated() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get_m_imageAllocated() const;

constexpr void __set_m_imageReserved(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get_m_imageReserved() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get_m_imageReserved() const;

constexpr void __set_m_imageMono(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get_m_imageMono() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get_m_imageMono() const;

constexpr void __set_ShaderFull(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_ShaderFull() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_ShaderFull() const;

constexpr void __set_ShaderLight(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_ShaderLight() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_ShaderLight() const;

constexpr void __set_m_isInitialized(bool  value) ;

constexpr bool& __get_m_isInitialized() ;

constexpr bool const& __get_m_isInitialized() const;

constexpr void __set_m_graphyManager(::Tayx::Graphy::GraphyManager*  value) ;

constexpr ::Tayx::Graphy::GraphyManager* __get_m_graphyManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::GraphyManager*> __get_m_graphyManager() const;

constexpr void __set_m_ramMonitor(::Tayx::Graphy::Ram::G_RamMonitor*  value) ;

constexpr ::Tayx::Graphy::Ram::G_RamMonitor* __get_m_ramMonitor() ;

constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Ram::G_RamMonitor*> __get_m_ramMonitor() const;

constexpr void __set_m_resolution(int32_t  value) ;

constexpr int32_t& __get_m_resolution() ;

constexpr int32_t const& __get_m_resolution() const;

constexpr void __set_m_shaderGraphAllocated(::Tayx::Graphy::G_GraphShader*  value) ;

constexpr ::Tayx::Graphy::G_GraphShader* __get_m_shaderGraphAllocated() ;

constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::G_GraphShader*> __get_m_shaderGraphAllocated() const;

constexpr void __set_m_shaderGraphReserved(::Tayx::Graphy::G_GraphShader*  value) ;

constexpr ::Tayx::Graphy::G_GraphShader* __get_m_shaderGraphReserved() ;

constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::G_GraphShader*> __get_m_shaderGraphReserved() const;

constexpr void __set_m_shaderGraphMono(::Tayx::Graphy::G_GraphShader*  value) ;

constexpr ::Tayx::Graphy::G_GraphShader* __get_m_shaderGraphMono() ;

constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::G_GraphShader*> __get_m_shaderGraphMono() const;

constexpr void __set_m_allocatedArray(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_m_allocatedArray() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_m_allocatedArray() const;

constexpr void __set_m_reservedArray(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_m_reservedArray() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_m_reservedArray() const;

constexpr void __set_m_monoArray(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_m_monoArray() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_m_monoArray() const;

constexpr void __set_m_highestMemory(float_t  value) ;

constexpr float_t& __get_m_highestMemory() ;

constexpr float_t const& __get_m_highestMemory() const;

/// @brief Method Update addr 0x2a07654 size 0xc virtual false final false
inline void Update() ;

/// @brief Method UpdateParameters addr 0x2a07660 size 0x258 virtual false final false
inline void UpdateParameters() ;

/// @brief Method Init addr 0x2a078b8 size 0x160 virtual false final false
inline void Init() ;

/// @brief Method UpdateGraph addr 0x2a07a18 size 0x268 virtual true final false
inline void UpdateGraph() ;

/// @brief Method CreatePoints addr 0x2a07c80 size 0x2ec virtual true final false
inline void CreatePoints() ;

static inline ::Tayx::Graphy::Ram::G_RamGraph* New_ctor() ;

/// @brief Method .ctor addr 0x2a07f6c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "G_RamGraph", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
G_RamGraph(G_RamGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "G_RamGraph", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
G_RamGraph(G_RamGraph const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 G_RamGraph()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Ram::G_RamGraph, 0x98>, "Size mismatch!");

} // namespace end def Tayx::Graphy::Ram
NEED_NO_BOX(::Tayx::Graphy::Ram::G_RamGraph);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::G_RamGraph*, "Tayx.Graphy.Ram", "G_RamGraph");
