#pragma once

#include <memory>
#include <nlohmann/json.hpp>

#include "gltf_data_accessor_iface.hxx"
#include "gltf_material_accessor_iface.hxx"

class GltfMesh
{
    protected:

    virtual void parseApplicationData(nlohmann::json& json);

    public:

    /** @brief Loads a GLTF frame object
     * @param json the JSON mesh
     * @param index index of the object to load
     * @param data_accessor helper to access data efficiently
     * @param material_accessor helper to load a texture
     * @note may throw a GltfException
     */
    GltfMesh(
        nlohmann::json& json,
        GltfDataAccessorIFace* data_accessor,
        GltfMaterialAccessorIFace* material_accessor
        );

    virtual ~GltfMesh();

};
